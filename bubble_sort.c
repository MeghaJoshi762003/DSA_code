#include<stdio.h>
void swap(int list[],int p,int q)
{
int temp;
temp=list[p];
list[p]=list[q];
list[q]=temp;

}
void readlist(int list[],int n)
{   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
}
void bsort(int list[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-(i+1);j++)
    {
        if(list[j]>list[j+1])
            swap(list,j,j+1);
    }

}
void printlist(int list[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
}
int main()
{
    printf("enter the number of element in the array\n");
    int n;
    scanf("%d",&n);
    int list[n];
    readlist(list,n);
    bsort(list,n);
    printlist(list,n);


}