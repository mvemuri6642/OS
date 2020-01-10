#include<stdio.h>
#include<unistd.h>
void main()
{
int a[50],b[50],c[50],t[50],w[50],n,q,i,d=0,r[50],j=0;
char p[50];
printf("enter no of process");
scanf("%d",&n);
printf("enter processes:");
for(i=0;i<n;i++)
{
scanf("%s",&p[i]);
}
printf("enter arrival time and burst time\n");
for(i=0;i<n;i++)
{
printf("enter arrival time:");
scanf("%d",&a[i]);
printf("enter burst time");
scanf("%d",&b[i]);
r[i]=b[i];
}
printf("enter quantum time:");
scanf("%d",&q);
while(j<n)
{
j++;
for(i=0;i<=n;i++)
{
if(r[i]==0)
{
continue;
}
if(r[i]>q)
{
r[i]=r[i]-q;
c[i]=d+q;
d=c[i];
}
else
{
c[i]=d+r[i];
r[i]=r[i]-r[i];
d=c[i];
}
}
}
for(i=0;i<n;i++)
{
t[i]=c[i]-a[i];
w[i]=t[i]-b[i];
}
printf("p \t at\t bt\t ct\ tat\t wt\n ");
for(i=0;i<n;i++)
{
printf("   %c   ",p[i]);
printf("   %d   ",a[i]);
printf("   %d   ",b[i]);
printf("   %d   ",c[i]);
printf("   %d   ",t[i]);
printf("   %d   ",w[i]);
printf("\n");
}
}


