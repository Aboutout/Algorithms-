#include<stdio.h>
#include<stdlib.h>

void main()
{
int k,i,j=1;

int s[10],s1[10],f[10],f2[10],sf1[10],sf2[10],n,temp;

printf("Enter Number of Process \n");
scanf("%d",&n);
printf("Enter all start time of Prosses one by one \n");
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}

printf("Enter all finish time of Prosses one by one w.r.t start time\n");
for(i=0;i<n;i++)
{
scanf("%d",&f[i]);
}

//sortinf finish time

for(k=0;k<n-1;k++)
{
  for(i=0;i<n-1-k;i++)
  {
     if(f[i]>f[i+1])
	{
	temp=f[i];
	f[i]=f[i+1];
	f[i+1]=temp;

      //sorting statr array
        temp=s[i];
	s[i]=s[i+1];
	s[i+1]=temp;
         
	}
  }
}

//

sf1[0]=s[0];
sf2[0]=f[0];


for(i=0,k=1;k<n;k++)
{
   if(s[k]>=f[i])
{
   sf1[j]=s[k];
   sf2[j]=f[k];
   j++;
   i++;
}
}
printf("StartingTime \t Finish Time\n");
for(k=0;k<j;k++)
{
printf("%d \t \t  %d \n",sf1[k],sf2[k]);
 }
}

