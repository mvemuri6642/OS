#include<fcntl.h>
#include<stdio.h>
void main()
{
FILE *fp;
char ch;
int count=0,n=5;
fp=fopen("a.txt","r");
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


