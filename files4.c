#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

void main()
{
FILE *fp1,*fp2;
char ch,data[20];
fp1=fopen("e.txt","w");
fp2=fopen("e.txt","r");
printf("enter the data:");
scanf("%s",data);
fputs(data,fp1);
fclose(fp1);
while((ch=fgetc(fp2))!=EOF)
{
printf("%c",ch);
}
}
