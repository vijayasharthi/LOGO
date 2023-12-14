#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*val;
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->a);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
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
    int pos;
    scanf("%d",&pos);
    int i=1;
    temp=head;
    while(i<pos){
val=temp;
temp=temp->next;
i++;
    
    }
    val->next=temp->next;
    free(temp);
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
printf("%d",temp->a);
temp=temp->next;
    }
}