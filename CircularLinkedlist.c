#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* delete(struct node* p,int index)
{
    struct node* temp;
    struct node* t;
    temp=p;
    struct node* prev;
    prev=NULL;
    if(index==1)
    {
        temp=p;
        t=p;
        p=p->link;
        while(temp->link!=t)
        {
            temp=temp->link;
        }
        free(t);
        temp->link=p;
        return p;
    }
    else
   { 
       while(--index)
    {
        prev=temp;
        temp=temp->link;   
    }
        t=prev->link;
        prev->link=temp->link;
        free(t);
        return p;
   }
}
struct node* insert(struct node*p,int value)
{
    struct node* temp;
    temp=p;
   if(p==NULL)
   {
       struct node* n;
       n=(struct node*) malloc(sizeof(struct node));
       n->data=value;
       n->link=n;
       p=n;
       return p;
   }
   else
   {
       while(temp->link!=p)
       {
           temp=temp->link;
       }
       struct node* n;
        n=(struct node*) malloc(sizeof(struct node));
       n->data=value;
       n->link=p;
       temp->link=n;
   }
   return p;
}
void printlist(struct node* p)
{
    struct node* temp;
    temp=p;
    if(p==NULL)
    {
        printf("list is empty\n");
    }
    else{
        do
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }while(temp!=p);
    }
}
int main()
{
struct node* head;
head=NULL;
int value,flag=0;
do
{
    printf("enter a number to add in the list\n");
    scanf("%d",&value);
   head= insert(head,value);
    printf("enter 1 to continue\n");
    scanf("%d",&flag);
} while (flag==1);
flag=1;
do
{   int t;
    printf("enter the index to delete the node\n");
    scanf("%d",&t);
    head=delete(head,t);
    printf("enter 1 to continue\n");
    scanf("%d",&flag);
}while(flag==1);
printf("your list is\n");
printlist(head);
return 0;

}