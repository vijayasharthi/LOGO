#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
        int a;
        struct node *prev;
        struct node *next;

    };
    struct node *head,*tail,*newnode,*temp;
    int choice=5;head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            tail=head;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        choice--;

    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    temp=head;
    int pos;
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->a);
    newnode->prev=0;
    newnode->next=0;
    for(int i=1;i<pos;i++){
         tail=temp;
    temp=temp->next;
}

    newnode->prev=tail;
    newnode->next=temp;
    tail->next=newnode;
    temp->prev=newnode;
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }}
