#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head=NULL,*temp,*new_node;
void main(){
int choice=1;

while(choice){
new_node=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&new_node->data);
new_node->next=NULL;
temp=head;


    if(head==NULL){
        head=new_node;
        temp=head;
    }
    else{
        temp->next=new_node;
    }
    printf("Do you want to continue(0/1)");
    scanf("%d",&choice);
}
  temp=head;
  while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}