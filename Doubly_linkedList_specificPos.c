#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;
    };
    struct node *newnode,*head,*tail,*temp;
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->prev=0;
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        choice--;
    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }
    temp=head;
    int pos;int i=1;
    scanf("%d",&pos);
    while(i<pos){
        tail=temp;//100
        temp=temp->next;//200
        i++;
    }
    struct node *m;
    m=temp->next;
    tail->next=m;
    m->prev=tail;
    free(temp);
 temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }


}