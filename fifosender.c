#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
//#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include <unistd.h>
//#include < >

int main()
{
    int fds;
    int a[2]={2,3};
    //unsigned char buffer[1024];
    fds=open("desdfifo",O_WRONLY);
    if(-1==fds)
    {
        perror("Error\n");
    }
    write(fds,"hello",5);
    write(fds,a,2);
    close(fds);
    return 0;
}