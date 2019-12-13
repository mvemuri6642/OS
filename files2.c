#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp,*fp1,*fp3;
char ch,ch1;

fp1=fopen("b.txt","r");
fp=fopen("a.txt","a");
fp3=fopen("a.txt","r");
while((ch=fgetc(fp1))!=EOF)
{
fputc(ch,fp);
}
while((ch1=fgetc(fp3))!=EOF)
{
printf("%c",ch1);
}
fclose(fp1);
fclose(fp);
}
