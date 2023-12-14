#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
        int a;
        struct node *prev;
        struct node *next;
    };
    struct node *newnode,*head,*temp,*m;
    head=0;
    int choice=5;
   m=0;
    while(choice){
      newnode=(struct node *)malloc(sizeof(struct node));
      scanf("%d",&newnode->a);
      newnode->prev=0;
      newnode->next=0;
      if(head==0){
        head=newnode;
        temp=newnode;
      }
      else{
        temp->prev=m;
        temp->next=newnode;
        m=temp;
        temp=newnode;  
      }
      choice--;
    }
    temp=head;

    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    
}