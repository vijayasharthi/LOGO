#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node*prev;
        struct node *next;
    };
    struct node *newnode,*head,*temp,*tail;
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
             newnode->prev=temp;
            temp=newnode;     
        }
        choice--;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    temp=head;
    struct node *m;
    m=temp->next;
    m->prev=0;
    head=m;
    free(temp);
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
}