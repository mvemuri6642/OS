#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include <fcntl.h>
void main(int argc,char *argv[])
{
int fd,n;
char buf[1000];
fd=open(argv[1],O_WRONLY);
n=read(STDIN_FILENO,buf,sizeof(buf));
write(fd,buf,n);
close(fd);
}
