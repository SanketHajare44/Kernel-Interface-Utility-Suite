// Command : touch

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

// ./statx   FileName
//  argv[0]   argv[1]
//  argc = 2

/* 
    Algorithm : 

    Accept file name from command line
    call access to check existence of file
    Call stat system call to get files meta data
    Dispaly the meta data   
*/

int main(int argc, char *argv[])
{

    if(argc != 2)
    {
        printf("Error : Insufficient arguments\n");
        printf("Use command as : ./statx  FileName\n");
        return -1;
    }

    if(access(argv[1],F_OK) == 0)
    {
        struct stat sobj;
        int iRet = 0;

        iRet = stat(argv[1],&sobj);

        if(iRet == -1)
        {
            printf("Error : unable to fetch statistical information\nn");
        }

        printf("File name : %s\n",argv[1]);
        printf("Inode number : %ld\n",(long)sobj.st_ino);
        printf("File size : %ld\n",(long)sobj.st_size);
        
    }
    else
    {
        printf("Error : File not found\n");
        return -1;
    }

    return 0;
}