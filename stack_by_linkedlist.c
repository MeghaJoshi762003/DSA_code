#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* push(struct node*p,int value)
{
    struct node* s;
    s=(struct node*)malloc(sizeof(struct node));
    s->data=value;
    s->link=p;
    p=s;
    return p;
    
}
struct node* pop(struct node*p,int* value)
{ struct node* temp;
  *value=p->data;
   temp=p;
  p=p->link;
 return p;
}
int main()
{
    struct node* top=NULL;
    int value;
    int flag=0;
    do
    {
       printf("enter the element to push\n");
       scanf("%d",&value);
       top=push(top,value);
       printf("enter 1 to continue\n");
       scanf("%d",&flag);
    } while (flag==1);
    flag=0;
    do{
        top=pop(top,&value);
        printf("%d is being popped\n",value);
        printf("enter 1 to continue\n");
         scanf("%d",&flag);
    }while(flag==1);

    return 0;

}