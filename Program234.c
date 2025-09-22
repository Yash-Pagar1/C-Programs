#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[20] = {'\0'};
    char Buffer[] = "India is my country";

    printf("Enter the name of the file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_WRONLY | O_APPEND);  //Change

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File is Opened Sucessfully with FD : %d\n",fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d bytes gets Written SUcessfully\n",iRet);

        close(fd);
    }

    return 0;
}