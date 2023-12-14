#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
        int a;
        struct node *next;
       
    };
    struct node *temp,*newnode,*head;
    int choice=5;
    head=0;
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
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    struct node *prev,*m;
    temp=head;
    prev=0;
    while(temp!=0){
        m=temp->next;//200//300//0
        temp->next=prev;//0//100//200
        prev=temp;//100//200//300
        temp=m;//200//300

    }
    temp=prev;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }


}