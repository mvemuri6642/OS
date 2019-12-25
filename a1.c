#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
	int fd1,n;
	char buf[100];
	fd1=open(argv[1],O_CREAT | O_RDWR | O_APPEND,0777);
	n=read(STDIN_FILENO,buf,sizeof(buf));
	write(fd1,buf,n);
	close(fd1);
}
