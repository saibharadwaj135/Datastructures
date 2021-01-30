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
void deleteBeginning(){
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
    display();
}
void deleteEnd(){
    struct node *prev;
    temp=tail->next;
    while(temp!=tail){
        prev=temp;
        temp=temp->next;
    }
    prev->next=tail->next;
    tail=prev;
    free(temp);
    display();

}
void atPosition(){
    temp=tail->next;
    struct node *prev;
    int pos,i=1;
    printf("enter position:");
    scanf("%d",&pos);
    while(i<pos-1){
       temp=temp->next;
       prev=temp;
       i++;
    }
    temp=prev->next;
    prev->next=temp->next;
    free(temp);
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
   deleteBeginning();
   printf("\n");
   deleteEnd();
   printf("\n");
   atPosition();
  
}