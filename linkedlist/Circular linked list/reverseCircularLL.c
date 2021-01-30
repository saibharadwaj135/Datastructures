#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *tail,*temp;
void display()
{
   temp=tail->next;
  do
   {
       printf("%d ",temp->data);
       temp=temp->next;
   } while(temp!=tail->next);
}
void reverse(){
    struct node *currentnode,*nextnode,*prevnode;
    currentnode=tail->next;
    nextnode=currentnode->next;
    while(currentnode!=temp){
      prevnode=currentnode;
      currentnode=nextnode;
      nextnode=currentnode->next;
      currentnode->next=prevnode;
    }
    nextnode->next=tail;
    tail=nextnode;
    display();
}
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
    display();
   printf("\n");
   printf("reverse\n");
   reverse();
   
}