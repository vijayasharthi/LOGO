#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
    };
    struct node *newnode,*head,*temp;
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        choice--;
    }
    temp->next=head;
    printf("%d",head->a);
    temp=head->next;
    while(head!=temp){
        printf("%d",temp->a);
        temp=temp->next;
    }
}