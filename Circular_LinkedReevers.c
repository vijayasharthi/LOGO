#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
    };
    struct node *newnode,*head=0,*temp,*prev,*val;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        choice--;
    }
    prev=temp;
    temp->next=head;
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }
    temp=head;
    head=prev;
    while(temp!=head){
        val=temp->next;
        temp->next=prev;
        prev=temp;
        temp=val;

    }
    printf("\n");
    temp->next=prev;
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }


}