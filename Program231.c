#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, iret = 0;
    char fname[20] = {'\0'};
    char Buffer[] = "India is my country";

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is Sucessfully opened with FD : %d\n",fd);

        iret = write(fd, Buffer, 11);

        printf("%d bytes gets written Sucessfully\n",iret);

        close(fd);
    }
    return 0;
}