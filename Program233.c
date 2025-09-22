#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[20] = {'\0'};
    char Buffer[] = "India is my Country";

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR | O_APPEND);   //change

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File is SUcessfully Opened with fd : %d\n",fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d bytes gets written Sucessfully\n",iRet);

        close(fd);
    }

    return 0;
}