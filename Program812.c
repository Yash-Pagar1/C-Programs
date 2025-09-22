#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

#define MAX_SIZE 1024

// Caesar Cipher

void Encrypt_Caesar_Cipher(char *Src, char *Dest, int Key)
{
    int fdSrc = 0, fdDest = 0;
    int iRet = 0, i = 0;
    char Buffer[MAX_SIZE] = {'\0'};

    fdSrc = open(Src, O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    fdDest = open(Dest, O_WRONLY | O_CREAT  | O_TRUNC, 0777);
    if(fdDest == -1)
    {
        printf("Unable to Create Destination file\n");
        return;
    }

    while((iRet = read(fdSrc, Buffer, sizeof(Buffer))) > 0)
    {
        printf("%d",iRet);

        for(i = 0; i < iRet; i++)
        {
            Buffer[i] = (Buffer[i] + Key) % 256;
        }

        write(fdDest, Buffer, iRet);
    }

    close(fdSrc);
    close(fdDest);
}

// XOR Cipher
void Encrypt_XOR_Cipher(char *Src, char *Dest, char Key)
{
    int fdSrc = 0, fdDest = 0;
    int iRet = 0, i = 0;
    char Buffer[MAX_SIZE] = {'\0'};

    fdSrc = open(Src, O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    fdDest = open(Dest, O_WRONLY | O_CREAT  | O_TRUNC, 0777);
    if(fdDest == -1)
    {
        printf("Unable to Create Destination file\n");
        return;
    }

    while((iRet = read(fdSrc, Buffer, sizeof(Buffer))) > 0)
    {
        printf("%d",iRet);

        for(i = 0; i < iRet; i++)
        {
            Buffer[i] = Buffer[i] ^ Key;
        }

        write(fdDest, Buffer, iRet);
    }

    close(fdSrc);
    close(fdDest);
}

void Decrypt_XOR_Cipher(char *Src, char *Dest, char Key)
{
    int fdSrc = 0, fdDest = 0;
    int iRet = 0, i = 0;
    char Buffer[MAX_SIZE] = {'\0'};

    fdSrc = open(Src, O_RDONLY);
    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    fdDest = open(Dest, O_WRONLY | O_CREAT  | O_TRUNC, 0777);
    if(fdDest == -1)
    {
        printf("Unable to Create Destination file\n");
        return;
    }

    while((iRet = read(fdSrc, Buffer, sizeof(Buffer))) > 0)
    {
        printf("%d\n",iRet);

        for(i = 0; i < iRet; i++)
        {
            Buffer[i] = Buffer[i] ^ Key;
        }

        write(fdDest, Buffer, iRet);
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{
    char SrcName[50] = {'\0'};
    char DestName[50] = {'\0'};
    char key = '\0';

    printf("Enter the name of original file : \n");
    scanf("%s",SrcName);

    printf("Enter the name of Encrypted file : \n");
    scanf("%s",DestName);

    printf("Enter the key for Encryption : \n");
    scanf(" %c",&key);

    Encrypt_XOR_Cipher(SrcName, DestName, key);

    printf("Enter the name of encrypted file : \n");
    scanf("%s",SrcName);

    printf("Enter the name of new decrypted file : \n");
    scanf("%s",DestName);

    printf("Enter the key for Decryption : \n");
    scanf(" %c",&key);

    Decrypt_XOR_Cipher(SrcName, DestName, key);

    return 0;
}