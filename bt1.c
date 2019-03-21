#include<stdlib.h>
#include<stdio.h>
struct tree
{
int data;
struct tree *left;
struct tree *right;
}*root;

void create()
{
int item;
struct tree *temp;
struct tree *q;
struct tree *prev;
printf("Enter data \n");
scanf("%d",&item);
temp=(struct tree*)malloc(sizeof(struct tree));
temp->right=NULL;
temp->left=NULL;
temp->data=item;
if(root==NULL)
{
root=temp;
}
else
{
q=root;
while(q!=NULL){
prev=q;
if(q->data>item)
  q=q->left;
else
  q=q->right;
  }


if(prev->data > item)
{
prev->left=temp;
}
else
{
prev->right=temp;
}
}

}

void preorder(struct tree *pre)
{

if(pre==NULL)
 return;

printf("%d \n",pre->data);
preorder(pre->left);
preorder(pre->right);


}
void postorder(struct tree *pre)
{

if(pre==NULL)
 return;

postorder(pre->left);
postorder(pre->right);
printf("%d \n",pre->data);


}
void inorder(struct tree *pre)
{


if(pre==NULL)
 return;


inorder(pre->left);
printf("%d \n",pre->data);
inorder(pre->right);



}
void Display()
{
printf("=====PRERDER=====\n");
preorder(root);
printf("=====POSTORDER=====\n");
postorder(root);
printf("=====INORDER=====\n");
inorder(root);

}


void find(int item,struct tree **parent,struct tree **child)
{
struct tree *parent1,*child1;
//empty tree
if(root == NULL)
{
*parent=NULL;
*child=NULL;
return;
}
if(item==root->data)
{
*child=root;
*parent=NULL;

return;
}
 
   if(item<root->data)
   child1=root->left;
   else
   child1=root->right;

   parent1=root;
   
   while(child1!=NULL)
   {
   if(item==child1->data)
   {
   *parent=parent1;
   *child=child1;
   printf("%d",child1->data);
   return;
   }
   parent1=child1;
   if(item<child1->data)
   {
   child1=child1->left;
   }
   else
   child1=child1->right;
   }
   
  *child=NULL;
  *parent=parent1;

   
}

void insert()
{
int item;
struct tree *temp,*parent,*child;
printf("Enter data \n");
scanf("%d",&item);
temp=(struct tree*)malloc(sizeof(struct tree));
temp->right=NULL;
temp->left=NULL;
temp->data=item;


find(item,&parent,&child);

//printf("hgjfdgh %d \n",parent->data);
//printf("hgjfdgh djfhyguid %d \n",child->data);

if(child!=NULL)
{
printf("item exist \n");
return;
}

if(parent ==NULL)
{
root=temp;
}
else
{
if(item<parent->data)
parent->left=temp;
else
parent->right=temp;

}
}


void main()
{

int choice;
while(1){
printf("1...CREATE\n");
printf("2...DISPLAY\n");
printf("3...INSERT\n");
printf("4...DELETE\n");
printf("5...EXIT\n");
printf("Enter youR choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
        create();   
        break;
case 2:Display();
       break;
case 3:insert(); 
       break;
case 5:exit(0);
default: printf("choose valid option \n");
}
}
}

