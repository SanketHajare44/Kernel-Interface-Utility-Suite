// Command : rm

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/utsname.h>

// ./rmx    Path
//  argv[0] argv[1]
//  argc = 2

/* 
    Algorithm : 

*/

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error : Insufficient arguments\n");
        printf("Use command as : ./rmx  Path\n");
        return -1;
    }

    if(access(argv[1],F_OK) == -1)
    {
        printf("Error : File not exist\n");
        return -1;
    }

    int iRet = 0;

    iRet = unlink(argv[1]);

    if(iRet == -1)
    {
        printf("Error : Unable to delete\n");
    }
    else
    {
        printf("Success : File gets deleted\n");
    }

    return 0;
}