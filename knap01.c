
#include<stdio.h>
#include<stdlib.h>
float value[50][50];
float max(float number1,float number2)
{
if(number1 > number2)
return number1;

else
 return number2;

}
void main()
{
int k,i,j=1,isave=0,jsave=0,tempindex,bagSize,a;

float weight[10],profit[10],totalweight=0,n,difference=0;
float maxProfit=0,reqvalue=0,mul=0;

printf("Enter Bag Size\n");
scanf("%d",&bagSize);

printf("Enter Number of Entities \n");
scanf("%f",&n);
printf("Enter all Weights \n");
for(i=1;i<=n;i++)
{
scanf("%f",&weight[i]);
}

printf("Enter all profit\n");
for(i=1;i<=n;i++)
{
scanf("%f",&profit[i]);
}

for(i=0;i<=n;i++)
{
for(j=0;j<=bagSize;j++)
{
if(i==0 || j==0)
{
value[i][j]=0;
}

else if(weight[i] > j)
{
value[i][j]=value[i-1][j];

}

else
{
a=(int)weight[i];
value[i][j]=max(profit[i]+value[i-1][j-a],value[i-1][j]);

}
}
}

for(i=0;i<=n;i++)
{
  if(value[i-1][bagSize] < value[i][bagSize])
   isave++;
}
maxProfit=value[isave][bagSize];
tempindex=bagSize-weight[isave];

for(j=0;j<=n;j++)
{
if(value[j-1][tempindex] < value[j][tempindex])
   jsave++;
}

printf("max profit=%f for : ",maxProfit);
printf("(%f , %f) \n",weight[jsave],weight[isave]);

}



