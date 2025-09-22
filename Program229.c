#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is Opened sucessfully with Fd %d\n",fd);

    close(fd);
    
    return 0;
}