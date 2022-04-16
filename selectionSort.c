#include<stdio.h>
void swap(int a[],int p,int q)
{
    int temp;
    temp=a[p];
    a[p]=a[q];
    a[q]=temp;
}
void selectionSort(int a[],int n)
{
    int min=10000;
    int j;
    int min_idx;
    for(int i=0;i<n-1;i++)
    {   min=a[i];
    
        for( j=i+1;j<n;j++)
        if(min>a[j])
        {
            min=a[j];
            min_idx=j;
        }
        swap(a,min_idx,i);
    }
}
void readlist(int a[],int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void printlist(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
int t;
int a[30];
printf("enter the number of element in the array\n");
scanf("%d",&t);
readlist(a,t);
selectionSort(a,t);
printlist(a,t);
return 0;
}