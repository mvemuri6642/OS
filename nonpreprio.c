#include<stdio.h>
void main()
{
int n,pid[100],bt[100],wt[100],tat[100],p[100],i,j,temp;
printf("enter the no.of processes:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter process %d",i+1);
scanf("%d",&pid[i]);
printf("enter process %d burst time:",i+1);
scanf("%d",&bt[i]);
printf("enter process %d priority",i+1);
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(p[i]>p[j])
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=pid[i];
pid[i]=pid[j];
pid[j]=temp;
}
}
wt[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
wt[i]=wt[i]+bt[i];
}
tat[i]=wt[i]+bt[i];
}
printf("process\t p\t bt\t wt\t tat\t\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\t%d\t%d\n",pid[i],p[i],bt[i],wt[i],tat[i]);
}
}
