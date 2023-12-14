#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;
    };
    int choice=5;
    struct node *head,*newnode,*tail,*temp;
    head=0;
    tail=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->prev=tail;
             tail=temp;
             
            temp->next=newnode;
            temp=newnode;
            
        }
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
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    

}