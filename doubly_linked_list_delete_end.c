#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
        struct node *prev;
    };
    struct node*newnode,*temp,*head,*tail;
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=newnode;
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
        tail=temp;
        printf("%d",temp->a);
        temp=temp->next;
    }

    struct node *m;
    m=tail->prev;
    m->next=0;
    free(tail);
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
}