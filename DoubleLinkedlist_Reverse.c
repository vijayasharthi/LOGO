#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*temp,*tail,*newnode,*m;
    head=0;
    int choice=5;
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
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            m=temp;

        }
        choice--;


    }
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->next;
    }

printf("\n");
temp=head;
while(temp!=0){
     tail=temp->next;//200//300//0
   temp->next=temp->prev;//0//100//200
   temp->prev=tail;//200//300//0
   temp=tail;//200//300//0

}
temp=m;
while(temp!=0){
    printf("%d",temp->a);
    temp=temp->next;
}

}