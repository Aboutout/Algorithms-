#include<stdio.h>
#include<stdlib.h>

void main()
{
int k,i,j=1;

float s[10],s1[10],f[10],f2[10],sf1[10],sf2[10],n,temp,size;
float div[10],temp1,weight,value,div1=0;

printf("Enter Max Size\n");
scanf("%f",&size);

printf("Enter Number of Entities \n");
scanf("%f",&n);
printf("Enter all Weights \n");
for(i=0;i<n;i++)
{
scanf("%f",&s[i]);
}

printf("Enter all Values\n");
for(i=0;i<n;i++)
{
scanf("%f",&f[i]);
}

for(i=0;i<n;i++)
{
printf("%f",f[i]/s[i]);
div1=f[i]/s[i];
div[i]=div1;
}
for(i=0;i<n;i++)
{
printf("%f \n",div[i]);
}
for(k=0;k<n-1;k++)
{
  for(i=0;i<n-1-k;i++)
  {
     if(div[i]<div[i+1])
	{
	temp1=div[i];
	div[i]=div[i+1];
	div[i+1]=temp1;

      //sorting statr array
        temp=s[i];
	s[i]=s[i+1];
	s[i+1]=temp;
    
        temp=f[i];
	f[i]=f[i+1];
	f[i+1]=temp; 
         
	}
  }
}

weight=size-s[0];
value=(weight*f[1])/s[1];

printf("Weight \t Value\n");
printf("%f \t %f\n",s[0],f[0]);
printf("%f  %f\n",weight,value);
}

