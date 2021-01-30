#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *tail,*temp;
int main(){
    tail=NULL;
    int choice;
    do{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL)
    {
        tail=newnode;
        newnode->next=tail;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    printf("if you want to continue press 1 exit 0:");
    scanf("%d",&choice);
    }while(choice);
   
   temp=tail->next;
  do
   {
       printf("%d ",temp->data);
       temp=temp->next;
   } while(temp!=tail->next);
}