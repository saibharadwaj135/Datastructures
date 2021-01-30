#include<stdio.h>
int l=0;
void insert(int h[],int n,int x)
{   
    
    int i,key;
    key=x%n;
    for(i=0;i<n;i++)
    {
        if(h[key]==-1)
        {
            h[key]=x;
            printf("the element is inserted in %d\n",key);
            l++;
            break;
        }
        else
        {
            key=(key+1)%n;
        }
    }
   
}
int main()
{
    int n,x,y,i,d;
    printf("enter the size of hashtable:");
    scanf("%d",&n);
    int h[n];
    for( i=0;i<n;i++)
    {
        h[i]=-1;
    }
    int choice;
    while(1)
    {
        printf("1.insert\n");
        printf("2.search\n");
        printf("3.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {            
            case 1: if(l==n)
                    {
                        printf("table is full\n");
                    }
                    else
                    {   printf("enter the number you want to insert:\n");
                    scanf("%d",&x);
                        insert(h,n,x);
                    }
                    break;
            case  2: 
                      printf("enter the number you want to search:\n");
                      scanf("%d",&y);
                      for(i=0;i<n;i++) 
                      {
                           if(h[i]==y)
                           {
                               printf("value is found at location %d\n",i);
                               break;
                           }
                      }
                       if(i==n)
                       {
                           printf("element is not found\n");
                       }
                      break;
            case 3: return 0;          
            default : printf("enter a valid option:");
            
        }
    }
}