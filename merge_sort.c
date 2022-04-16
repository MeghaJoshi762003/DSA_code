#include<stdio.h>
#define MAX 10
void readlist(int list[],int n)
{   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
}
void printlist(int list1[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",list1[i]);
    }
}
void merge(int list[],int list1[],int k,int m,int n)
{
int i=k;
int j=m+1;
while(i<=m&&j<=n)
{
    if(list[i]<=list[j])
    {
        list1[k]=list[i];
        k++;
        i++;
    }
    else
    {
        list1[k]=list[j];
        k++;
        j++;
    }
}
while(i<=m)
{
    list1[k]=list[i];
    k++;
    i++;
}
while(j<=n)
{
    list1[k]=list[j];
    i++;
    j++;
}
}
void mergesort(int list[],int list1[],int l,int h)
{
   if(l<h)
   {    int mid;
       mid=(l+h)/2;
       mergesort(list,list1,l,mid);
       mergesort(list,list1,mid+1,h);
       merge(list,list1,mid,l,h);
   }
}
int main()
{
int list[MAX];
int list1[MAX];
int t;
printf("enter the number of element in the array\n");
scanf("%d",&t);
readlist(list,t);
mergesort(list,list1,0,t-1);
printlist(list1,t);
return 0;
}