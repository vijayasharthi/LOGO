#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
     int a;
     struct node *p;
    };
    struct node *newnode,*head,*temp;
    head=0;
    int choice=5; 
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->p=0;
        if(head==0){
            head=newnode;
            temp=head;
        }
        else{
            temp->p=newnode;
            temp=newnode;
        }
        choice--;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->p;
    }
    
struct node *m;
m=head;
head=head->p;
free(m);
temp=head;
while(temp!=0){
    printf("%d",temp->a);
    temp=temp->p;
}}