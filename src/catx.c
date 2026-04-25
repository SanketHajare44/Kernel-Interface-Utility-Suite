// Command : touch

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

// ./catx   FileName
//  argv[0]   argv[1]
//  argc = 2

/* 
    Algorithm : 

    Accept file name from command line
    Check whther file is existing or not 
    If it is existing then direct print on console
    if it is not existing then 
    Display no such file or directory

*/

#define MAX_FILE_SIZE 1024

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error : Insufficient arguments\n");
        printf("Use command as : ./catx  FileName\n");
        return -1;
    }

    if(access(argv[1],F_OK) != 0)
    {
        printf("cat: %s : No such file or directory\n",argv[1]);
        return -1;
    }
    else
    {
        int fd = 0;
        int iRet = 0;

        char Buffer[MAX_FILE_SIZE];
        memset(Buffer,'\0',sizeof(Buffer));

        fd = open(argv[1],O_RDONLY);
        if(fd < 0)
        {
            printf("Error : Unable to open file\n");
            return -1;
        }

        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer));
        }

        printf("\n");

        close(fd);
    }

    return 0;
}