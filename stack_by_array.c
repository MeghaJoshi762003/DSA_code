#include<stdio.h>
#define max 10
void push(int stack[],int *top,int value)
{
  if(*top<10)
  {
      *top=*top+1;
      stack[*top]=value;
  }
  else{
      printf("stack is full already\n");
  }
}
void pop(int stack[],int *top,int *value)
{
    if(*top==-1)
    {
        printf("stack is empty can't delete\n");
    }
    else{
        *value=stack[*top];
        *top=*top-1;
    }
}
int main()
{
    int top=-1,value;
 int stack[max];
 int i=1;
 while(i==1)
 {
     i=0;
     printf("enter the element to push\n");
     scanf("%d",&value);
     push(stack,&top,value);
     printf("enter 1 to continue\n");
     scanf("%d",&i);
 }
 int j=1;
 while(j==1){
     j=0;
     if(top!=-1)
     {printf("the value popped is\n");
     pop(stack,&top,&value);
     printf("%d\n",value);
     }
     else
         {
        printf("stack is empty can't delete\n");
        }
     
     
     printf("enter 1 to continue\n");
     scanf("%d",&j);
 }
 return 0;
}