#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
char p[10],h;
int bt[10],at[10],wt[10],tat[10],ct[10],k,i,minpos,min,d,j;
printf("Enter the number of processes:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
printf("Enter the name,arrival time  and burst time of %d process:\n",i);
scanf("%s%d%d",&p[i],&at[i],&bt[i]);
}

for(i=2;i<k;i++)
{
min=bt[i];
minpos=i;
for(j=i;j<=k;j++)
{
if(bt[i]<min)
{
min=bt[i];
minpos=i;
}
}
bt[minpos]=bt[i];
bt[i]=min;
d=at[i];
at[i]=at[minpos];
at[minpos]=d;
h=p[i];
p[i]=p[minpos];
p[minpos]=h;
}
for(i=1;i<=k;i++)
{
if(i==1)
{
ct[i]=bt[i];
}
else
{
ct[i]=ct[i-1]+bt[i];
}
}
for(i=1;i<=k;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
}
printf("pro\tat\tbt\tct\ttat\twt\n");
for(i=1;i<=k;i++)
{
printf("%c\t%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
}
}
