#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter the name of the file that you wnat to open : \n");
    scanf("%s",fname);

    // O_RDONLY
    // O_WRONLY
    // O_RDWR

    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is Sucesssfully Opened  with Fd %d\n",fd);

    return 0;
}