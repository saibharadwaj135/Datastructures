#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *tail,*temp;
void display(){
     temp=tail->next;
  do
   {
       printf("%d ",temp->data);
       temp=temp->next;
   } while(temp!=tail->next);
}
void insertionBeginning(){
    temp=tail->next;
    struct node *innode;
    innode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&innode->data);
    innode->next=temp;
    tail->next=innode;

    display();
}
void insertEnd(){
     struct node *innode;
     innode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&innode->data);
    innode->next=tail->next;
    tail->next=innode;
    tail=innode;
    display();
}
void insertAtPos(){
    temp=tail->next;
    int pos,i=1;
    printf("enter the pos\n");
    scanf("%d",&pos);
    struct node *innode;
    innode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&innode->data);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    innode->next=temp->next;
    temp->next=innode;
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
   insertionBeginning();
   printf("\n");
   insertEnd();
   printf("\n");
  insertAtPos();
}