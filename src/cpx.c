// Command : cp (Copy the file)

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

// ./cpx    Source.txt      Dest.txt
// argv[0]  argv[1]         argv[2]
// argc = 3

/* 
    Algorithm : 

    open source file for reading
    Create Destination file
    Read the data from source 
    Write it into Destination
    close both files

*/

#define MAX_BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Error : Insufficient arguments\n");
        printf("Use command as : ./cpx   SourceFileName   DestinationFileName\n");
        return -1;
    }

    int fdsrc = 0;
    int fddest = 0;
    int iRet = 0;
    
    char Buffer[MAX_BUFFER_SIZE];           // char Buffer[MAX_BUFFER_SIZE] = {'\0'};
    memset(Buffer,'\0',sizeof(Buffer));

    fdsrc = open(argv[1],O_RDONLY);
    if(fdsrc < 0)
    {
        printf("Error : Unable to open source file %s\n",argv[1]);
        return -1;
    }

    fddest = creat(argv[2],0777);
    if(fddest < 0)
    {
        printf("Error : Unable to create destination file %s\n",argv[2]);
        close(fdsrc);
        return -1;
    }

    while((iRet = read(fdsrc,Buffer,sizeof(Buffer))) != 0)
    {
        write(fddest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    printf("Success : Copy activity done\n");
    close(fddest);
    close(fdsrc);

    return 0;
}