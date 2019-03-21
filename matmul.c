#include<stdio.h>
#include<stdlib.h>

int a[10][10],b[10][10],c[10][10],i=0,j=0,k=0,n;

void multiply(int a[10][10],int b[10][10])
{
if(i<n){ // for(i=0;i<n;i++)
  if(j<n){// for(j=0;j<n;j++)
    if(k<n){// for(k=0;k<n;k++)
         c[i][j]=c[i][j]+a[i][k]*b[k][j];
          k++;
         multiply(a,b);
}
k=0;
j++;
multiply(a,b);
}
i++;
j=0;
multiply(a,b);
}
}

void main()
{
int x,y;
printf("Enter value of n \n");
scanf("%d",&n);

printf("Enter A matrix value \n");

for(x=0;x<n;x++)
{
 for(y=0;y<n;y++)
  {
    scanf("%d",&a[x][y]);
  }
}
printf("Enter B matrix value \n");

for(x=0;x<n;x++)
{
 for(y=0;y<n;y++)
  {
    scanf("%d",&b[x][y]);
  }
}
multiply(a,b);
printf("Matrix Mul Is\n");

for(x=0;x<n;x++)
{
 for(y=0;y<n;y++)
  {
    printf("%d \t",c[x][y]);
  }printf("\n");
}
}
