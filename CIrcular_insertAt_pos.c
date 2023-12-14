#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
    };
    struct node *newnode,*temp,*head;
    int choice=5;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
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
    temp=head;
    printf("%d",temp->a);
    temp=head->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }
    temp=head;
    int pos;
    scanf("%d",&pos);
    int i=1;
    struct node *val;
    while(i<pos){
        val=temp;
temp=temp->next;
i++;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->a);
    newnode->next=0;
     val->next=newnode;
    newnode->next=temp;
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
         printf("%d",temp->a);
         temp=temp->next;
    }   
}