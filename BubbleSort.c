#include<stdio.h>
void BubbleSort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,n,a[100];
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    printf("elements after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}