#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp;
    int choice=5;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
        
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        choice--;
    }
    struct node *val;
    val=temp->prev;
    val->next=temp->next;
    head->prev=val;
    free(temp);
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;    }

}