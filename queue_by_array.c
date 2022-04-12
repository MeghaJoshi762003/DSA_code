#include<stdio.h>
#include<stdlib.h>
//#include<macro.h>
//#define MAX 10;
void insert(int queue[],int* rear,int value)
{
    if(*rear<10)
{
    *rear=*rear+1;
    queue[*rear]=value;
}
else
printf("Queue is already full\n");
}
void delete(int queue[],int* front,int rear,int* value)
{
  if(*front==rear)
  printf("Queue is empty\n");
  else
  *front=*front+1;
  *value=queue[*front];
}
int main()
{
 int queue[10];
 int front=-1,rear=-1;
 int value,flag=0;
 do{
     printf("enter the element to add in queue\n");
     scanf("%d",&value);
     insert(queue,&rear,value);
     printf("enter 1 to continue\n");
     scanf("%d",&flag);
    }while(flag==1);
    flag=0;
    do{
        delete(queue,&front,rear,&value);
        printf("%d value is removed\n",value);
     printf("enter 1 to continue\n");
     scanf("%d",&flag);
    }while(flag==1);
    return 0;

}