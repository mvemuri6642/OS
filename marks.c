#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <errno.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
int fd1,fd2,n;
char buf[100];
fd2=open("/home/cse/19B95B0506/marks.txt",O_WRONLY | O_CREAT | O_EXCL,0644);
if ((fd1 == -1) && (EEXIST == errno)){
fd2=open("/home/cse/19B95B0506/marks.txt",O_WRONLY);
}
n=read(STDIN_FILENO,buf,sizeof(buf));
write(fd2,buf,sizeof(buf));
close(fd1);
close(fd2);
}
