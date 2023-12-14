#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;

    };
    struct node *head,*temp,*tail,*newnode;
    int choice=5;
    head=0;tail=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));

        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;

        if(head==0){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail= newnode;       }
        choice--;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }

newnode=(struct node *)malloc(sizeof(struct node));
scanf("%d",&newnode->a);
newnode->prev=0;
newnode->next=0;

tail->next=newnode;
newnode->prev=tail;
temp=head;
while(temp!=0){
    printf("%d",temp->a);
    temp=temp->next;
}
}