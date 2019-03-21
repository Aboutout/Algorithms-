#include<stdio.h>
#include<stdlib.h>

void main()
{
int k,i,j=1,isave=0;

int Length[10],Profit[10],totalprofit=0,n,difference=0,rodlength,required[20][20];
int ratio,value=0,tempLength=0,tempValue=0,tempValue1=0,totalValue=0,index[10];

printf("Enter Rod Length to be Compute\n");
scanf("%d",&rodlength);

printf("Enter Number of Entities \n");
scanf("%d",&n);

printf("Enter all Rod Lengths \n");
for(i=0;i<n;i++)
{
scanf("%d",&Length[i]);
}

printf("Enter Profit\n");
for(i=0;i<n;i++)
{
scanf("%d",&Profit[i]);
}
for(i=0;i<n;i++)
{
required[i][0]=0;
required[i][1]=Profit[0];
}
for(j=1;j<=n;j++)
{
required[0][j]=(Length[i]/Length[0])*Profit[0];
}
for(j=0;j<=n;j++)
{
printf("%d",required[0][j]);
}
}

