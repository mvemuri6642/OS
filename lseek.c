#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
int fd,n=4,c=0;
char buf[100],ch[2];
fd=open(argv[1],O_RDONLY);
while(lseek(fd,0,1)!=-1)
{
read(fd,ch,1);
printf("%c",ch[0]);
if(ch[0]=='\n')
c++;
if(c>=n)
break;
}
close(fd);
}
