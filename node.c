#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *head=NULL, *newNode;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=98;
    newNode->next=NULL;
    head->next=newNode;

    newNode=head;
    while(newNode!= NULL){
        printf("%d->",newNode->data);
        newNode=newNode->next;
    }
    printf("%s","NULL");
};