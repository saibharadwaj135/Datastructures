#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail;
  struct node *temp,*temp1;
void deletenode()
{
    temp=head;
    int key;
    printf("enter the key value:");
    scanf("%d",&key);
    while(temp->data!=key)
    {   temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}
int main()
{
    int i,n;
    head=NULL;
    printf("enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            newnode->next=NULL;
        }
        else
        {
            tail->next=newnode;
            newnode->next=NULL;
            tail=newnode;   
        }
    }
    deletenode();
    temp1=head;
    while(temp1!=NULL)
    {   
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }

}    