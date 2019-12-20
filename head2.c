#include<fcntl.h>
#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int count=0,n=4;
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
if(count==n)
{
break;
}
else
{
printf("%c",ch);
}
count++;
}
fclose(fp);
}

