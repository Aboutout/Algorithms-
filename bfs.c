#include<stdio.h>

int adj[20][20],parent[20],distance[20],Q[20],q=1,u;
int color[20];
int i,j,k,n,vertex[10];

void Enqueue(int no)
{
  Q[q]=no;
  q++;
}
int Dequeue()
{
int item;
 item=Q[q];
 q--;
 return item;
  
}
void bfs(int v)
{
color[v]=1;
parent[v]=0;
Enqueue(v);
while(Q[q]!=0)
{
u=Dequeue();
for(i=0;i<n;i++)
{
if(color[i]==0)
{
color[i]=1;
distance[i]=distance[u]+1;
parent[i]=u;
Enqueue(i);
}
printf("%d \n",u);
color[u]=2;
}
}
}
void main()
{

 printf("Enter the no of vertices \n");
 scanf("%d",&n);

 printf("Enter the adj matrix \n");
 for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}
for(i=0;i<n;i++)
{
color[i]=0;
distance[i]=0;
}
Q[0]=0;
bfs(1);
}
