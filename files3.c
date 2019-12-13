#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

void main()
{
FILE *fp1,*fp2,*fp3,*fp4;
char ch,ch1,data[20];
fp1=fopen("c.txt","w");
fp2=fopen("c.txt","r");
fp3=fopen("d.txt","a");
fp4=fopen("d.txt","r");
printf("enter the data:");
scanf("%s",data);
fputs(data,fp1);
fclose(fp1);
while((ch=fgetc(fp2))!=EOF)
{
fputc(ch,fp3);
}
fclose(fp3);
while((ch1=fgetc(fp4))!=EOF)
{
printf("%c",ch1);
}
}
