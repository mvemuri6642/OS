#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp1,*fp2,*fp3,*fp4;
char ch1,ch2,ch3;

fp1=fopen("f.txt","r");
fp2=fopen("g.txt","r");
fp3=fopen("h.txt","a");
fp4=fopen("h.txt","r");
while((ch1=fgetc(fp1))!=EOF)
{
fputc(ch1,fp3);
}
while((ch2=fgetc(fp2))!=EOF)
{
fputc(ch2,fp3);
}
fclose(fp3);
while((ch3=fgetc(fp4))!=EOF)
{
printf("%c",ch3);
}
fclose(fp1);
fclose(fp2);
}
