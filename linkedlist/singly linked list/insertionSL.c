#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

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
void beginning()
{
    struct node* innode;
    innode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&innode->data);
    innode->next=head;
    head=innode;
    display();

}
void end()
{
    struct node* innode;
    innode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&innode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=innode;
    innode->next=NULL;
    display();
    }    
void afterposition()
{
    int pos,i=1;
    printf("enter position");
    scanf("%d",&pos);
    struct node* innode;
   temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    innode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&innode->data);
    innode->next=temp->next;
    temp->next=innode;
    display();
}
int main()
{
    head=NULL;
    int choice;
    struct node *tail;
    struct node *newnode;
    do{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
       head=newnode;
       temp=newnode;
       tail=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->next=NULL;
        temp=newnode;
        tail=newnode;
    }
    printf("do you want to continue press 1 to exit 0:");
    scanf("%d",&choice);
    
    }while(choice);
   
   display();
   beginning();
   end();
   afterposition();
}