#include<stdio.h>
void readlist(int list[],int n)
{   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
}
void printlist(int list[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",list[i]);
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
mergesort(int list[],int n)
{
    for(l=1;l<n;l=2*l+1)
    {
        
    }
}
int main()
{

}