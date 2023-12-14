#include<stdio.h>
#include<stdlib.h>
void main(){
    struct node{
        int a;
        struct node *next;
    };
    struct node *newnode,*head,*temp,*m,*val;
    
    head=0;
    int choice=5;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node ));
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
    temp=head;
    printf("%d",temp->a);
    temp=temp->next;
    while(temp!=head){
        printf("%d",temp->a);
        m=temp;
        temp=temp->next;
    }
    m->next=head;
    printf("vijay");
     temp=temp->next;
     val=temp;
    m->next=val;
     printf("vijay");
     m=head;
     free(m);
     head=val;
     temp=head;
    //printf("%d",temp->a);
     temp=temp->next;
     while(temp!=head){
        printf("%d",temp->a);
         temp=temp->next;
    }

    
}
