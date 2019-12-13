#include<fcntl.h>
#include<stdio.h>
void main()
{
FILE *fp;
char ch;
fp=fopen("a.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
}


