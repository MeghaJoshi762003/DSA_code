#include<stdio.h>
#include<stdlib.h>
void swap(int a[],int p,int q)
{
int temp;
temp=a[p];
a[p]=a[q];
a[q]=temp;
}
void quicksort(int a[],int m,int n)
{
int i=m+1;
int j=n;
int key=a[0];
while(i<=j)
{
while(a[i]<=key&&i<=n)
{
i++;
}
while(a[j]>=key&&j>=1)
{
j--;
}
if(i<j)
swap(a,i,j);
}
swap(a,j,key);
quicksort(a,m,j-1);
quicksort(a,j+1,n);
}

int main()
{
int t;
printf("enter the number of element of array\n");
scanf("%d",&t);
int a[t];
int i;
printf("enter the array\n");
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}

quicksort(a,0,t-1);
printf("sorted array is \n");
for(i=0;i<t;i++);
printf("%d ",a[i]);
return 0;
}