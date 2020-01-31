#include<string.h>
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
 FILE *fp;
fp=fopen("ac.txt","r");
printf("errno:%d",errno);
printf("The error message is : %s\n",strerror(errno)); 
perror("message from");
return 0;
}
