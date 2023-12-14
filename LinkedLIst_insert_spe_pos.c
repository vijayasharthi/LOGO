#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
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
        temp=newnode;
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
    int pos;
    printf("Enteer the position to insert the value");
    scanf("%d",&pos);
    struct node*m;
    temp=head;
    for(int i=1;i<pos;i++){
        m=temp;
        temp=temp->p;
    }
    newnode=(struct node *)malloc(sizeof(struct node *));
    scanf("%d",&newnode->a);
    newnode->p=0;
    m->p=newnode;
    newnode->p=temp;
    temp=head;
    while(temp!=0){
        printf("%d",temp->a);
        temp=temp->p;
    }


}
