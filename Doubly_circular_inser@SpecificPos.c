#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
        int a;
        struct node *prev;
        struct node *next;
    };
    struct node *newnode,*head=0,*temp;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        newnode->prev=0;
        if(head==0){
            temp=head=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        choice--;
    }
    temp->next=head;
    temp=head;
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->a);
    newnode->next=0;
    newnode->prev=0;
    int i=1;
    struct node *val;
    val=temp;
    while(i<pos){
        val=temp;
        temp=temp->next;
        i++;
    }
    newnode->prev=val;
    newnode->next=temp;
    val->next=newnode;
    temp->prev=newnode;
    temp=head->next;
    printf("%d",head->a);
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }

}