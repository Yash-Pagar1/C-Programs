#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter the name of the file : \n");
    scanf("%s",fname);

    fd = creat(fname, 0777);

    if(fname == -1)
    {
        printf("unable to craete file\n");
        return -1;
    }

    printf("File is created sucessfully with fd %d\n",fd);

    return 0;
}