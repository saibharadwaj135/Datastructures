#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp;
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void  delbeginning()
{   
    temp=head;
    head=temp->next;
    free(temp);
     printf("delete from beginning");
    display();
}
void delend()
{    temp=head;
    struct node* prev;
    while(temp->next!=NULL)
    {   prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    printf("delete from end");
    display();
}
void delposition()
{   int i=1,pos;
printf("enter the position");
     scanf("%d",&pos);
     struct node* prev;
     temp=head;
     while(i<pos-1)
     {
         temp=temp->next;
         i++;
     }
    prev=temp->next;
    temp->next=prev->next;
    free(prev);
   
    display();
}
int main()
{    int choice;
    do{
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter the data:");
     scanf("%d",&newnode->data);
     if(head==NULL)
     {
         head=temp=newnode;
     }
     else
     {
        temp->next=newnode;
        newnode->next=NULL;
        temp=newnode;

     }
     printf("do you want to continue press1 to exit 0:");
     scanf("%d",&choice);
    }while(choice);
     temp=head;
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }
     printf("\n");
     delbeginning();
      printf("\n");
      delend();
      printf("\n");
      delposition();

}