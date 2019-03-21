#include<stdio.h>
#include<stdlib.h>

void main()
{
int k,i,j=1,isave=0;

float weight[10],value[10],totalweight=0,n,difference=0,size;
float div[10],totalvalue=0,reqvalue=0,mul=0;

printf("Enter Max Size\n");
scanf("%f",&size);

printf("Enter Number of Entities \n");
scanf("%f",&n);
printf("Enter all Weights \n");
for(i=0;i<n;i++)
{
scanf("%f",&weight[i]);
}

printf("Enter all Values\n");
for(i=0;i<n;i++)
{
scanf("%f",&value[i]);
}

for(i=0;i<n;i++)//taking ratios in div[]
{
div[i]=(value[i]/weight[i]);
}




while(totalweight < size)//end condition
{
if(difference>=0.000000)//
{
 for(i=0;i<n;i++)//checking for largest ratio
  { 
    if(div[isave]<div[i])
     {
         isave=i;
     }
 
 }

   
   if(difference>=weight[isave])difference=weight[isave];//if diffrerence is greater than weight of second large entity (in case of max size 30 in place of 20 reference class ex B div)

   reqvalue=difference*div[isave];//taking value for remaining weight i.e difference 
  
    if(difference==0.000000)//it will execute only for first time
	{
	    totalweight=weight[isave];
	    totalvalue=value[isave];
       }
    else{
       totalweight+=difference;//from second time it will execute
       totalvalue+=reqvalue;
      }	
    weight[isave]=0;value[isave]=0;div[isave]=0;//making invalidate values
    isave=0;

    difference=size-totalweight; //taking difference 

}
}
printf("totalweight=%f, totalvalue=%f \n",totalweight,totalvalue);
}

















