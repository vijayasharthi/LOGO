#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next; 
    };
    struct node *newnode,*head=0,*temp;
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
    temp->next=head->next;
   // temp=head->next;
    head->next->prev=temp;
    struct node *val;
    val=head;
    free(val);
    head=head->next;
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }

}