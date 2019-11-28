#include <stdio.h>
//#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <error.h>
#include <unistd.h>
//#include < >

int main()
{
    int fdr;
    unsigned char buffer[1024];
    fdr=open("desdfifo",O_RDONLY);
    if(-1==fdr)
    {
        perror("Error\n");
    }
   read(fdr,buffer,5);
   printf("%s",buffer);
    close(fdr);
    return 0;
}