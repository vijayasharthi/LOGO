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
    temp=head;
    while(temp->p!=0){
        m=temp;
        temp=temp->p;
    }
    m->p=0;
    free(temp);
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->p;
    }
}