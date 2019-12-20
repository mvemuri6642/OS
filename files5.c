#include<stdio.h>
#include<fcntl.h>
void main()
{
FILE *fp1,*fp2,*fp3,*fp4;
char ch1,ch2,ch3;

fp1=fopen("data.txt","r");
fp3=fopen("even.txt","a");
fp4=fopen("odd.txt","w");
while((ch1=fgetc(fp1))!=EOF)
{
if (ch1%2==0)
{
fputc(ch1,fp3);
}
else
{
fputc(ch1,fp4);
}
}
fclose(fp3);
fclose(fp4);
}
