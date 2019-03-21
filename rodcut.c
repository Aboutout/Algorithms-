#include<stdio.h>
#include<stdlib.h>

void main()
{
int k,i,j=1,isave=0;

int Length[10],Profit[10],totalprofit=0,n,difference=0,rodlength;
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
if(rodlength % Length[i]==0)
{
totalValue=value;
ratio=rodlength/Length[i];
value=ratio*Profit[i];

if(totalValue < value)
{
isave=i;

}

}
else
{
difference=rodlength % Length[i];
tempLength=rodlength-difference;
ratio=tempLength/Length[i];
tempValue=ratio*Profit[i];
for(j=0;j<n;j++)
{
if(difference==Length[j])
{
tempValue1=Profit[j];
break;
}
}

totalValue=tempValue+tempValue1;
if(totalValue > value)
{
value=totalValue;
isave=i;

}
}
}






//display logic

difference=rodlength % Length[isave];
ratio=rodlength / Length[isave];
for(i=0;i<ratio;i++)
{
index[i]=Length[isave];
}

printf(" Heighest Profit is %d  for \t",value);
for(i=0;i<ratio;i++)
{
printf("%d,",index[i]);
}
printf("%d \n",difference);
}
