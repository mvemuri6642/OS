#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
void main(int argc,char *argv[])
{
  int fd1,fd2,fd3,n,i,buf[100];
  fd1=open(argv[1],O_RDONLY);
  fd2=open(argv[2],O_WRONLY);
  fd3=open(argv[3],O_WRONLY);
  n=read(fd1,buf,sizeof(buf));
  for(i=0;i<n;i++)
  {
    if(buf[i]%2==0)
    {
      write(fd2,buf,n);
    }
    else
    {
      write(fd3,buf,n);
    }
  }
  close(fd1);
  close(fd2);
  close(fd3);
}

