// Command : uname

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/utsname.h>

// ./unamex
//  argv[0]
//  argc = 1

/* 
    Algorithm : 

    open the directory /proc
    open all subdirectors whose name is integer
    Inside that directory open comm file 
    display the inside that file

*/

int main(int argc, char *argv[])
{
    return 0;
}