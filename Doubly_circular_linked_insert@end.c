#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;

    };
    struct node *head=0,*temp,*newnode,*m;
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
    m=temp;
    temp->next=head;
    printf("%d",head->a);
    temp=head->next;
    while(temp!=head){
        printf("%d",temp->a);
        temp=temp->next;
    }
newnode=(struct node *)malloc(sizeof(struct node));
scanf("%d",&newnode->a);
newnode->prev=0;
newnode->next=0;
m->next=newnode;
newnode->prev=m;
newnode->next=head;
printf("%d",head->a);
temp=head->next;
while(temp!=head){
    printf("%d",temp->a);
    temp=temp->next;
}

}