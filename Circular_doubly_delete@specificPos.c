#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
        struct node *prev;

    };
    struct node *newnode,*head=0,*temp,*m;
    struct node *val;
    int choice=5;int i=1;
while(choice){
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->a);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    choice--;
}
temp->next=head;
int pos;
printf("Enter the position:");
scanf("%d",&pos);
temp=head;
while(i<pos){
    m=temp;
    temp=temp->next;
    i++;

}
m->next=temp->next;

val=temp->next;
val->prev=m;
free(temp);

val=head;
printf("%d",val->a);

val=val->next;

while(val!=head){
    printf("%d",val->a);
    val=val->next;
}

}