#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node {
        int a;
        struct node *next;
    };
    struct node *newnode,*temp,*head=0;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        if(head==0){
            head=newnode;
            temp=newnode;
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
temp=temp->next;
while(temp!=head){
    printf("%d",temp->a);
    temp=temp->next;
}
temp=head;
struct node *val;
while(temp->next!=head){
val=temp;
temp=temp->next;
}
val->next=head;
free(temp);
temp=head;
printf("%d",temp->a);
temp=temp->next;
while(temp!=head){
    printf("%d",temp->a);
    temp=temp->next;
}
}