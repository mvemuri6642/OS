#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
struct stat buff;
stat("type.c",&buff);
if(S_ISREG(buff.st_mode))
{
printf("regular file");
}
else if(S_ISDIR(buff.st_mode))
{
printf("directory");
}
else if(S_ISCHR(buff.st_mode))
{
printf("character file");
}
else if(S_ISBLK(buff.st_mode))
{
printf("block file");
}
else if(S_ISLNK(buff.st_mode))
{
printf("link file");
}
else if(S_ISSOCK(buff.st_mode))
{
printf("socket file");
}
else if(S_ISFIFO(buff.st_mode))
{
printf("FIFO file");
}
}
