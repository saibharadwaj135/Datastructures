#include<stdio.h>
void insertionSort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("elements after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[100],i,n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);
}