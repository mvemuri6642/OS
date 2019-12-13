#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
void main(int argc,char *argv[])
{
int fd1,fd2,n;
char buf[100];
fd1=open(argv[1],O_RDONLY);
fd2=open(argv[2],O_WRONLY);
n=read(fd1,buf,sizeof(buf));
write(fd2,buf,n);
close(fd1);
close(fd2);
}
