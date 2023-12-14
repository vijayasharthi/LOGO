#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *link;
};
struct node *top=0;
void push(int a)
{
       struct node *newnode;
       newnode=(struct node *)malloc(sizeof(struct node));
       newnode->val=a;
       newnode->link=top;
       top=newnode;
}
void pop(){
    if(top==0){
        printf("Underflow condition");
    }
    else{
        struct node *temp;
        temp=top;
        top=top->link;
        printf("%d",temp->val);
        free(temp);
    }
}
void peek(){
    if(top==0){
        printf("Stack is Empty");
    }
    else{
        printf("%d",top->val);
    }
}
void display(){
    if(top==0){
        printf("Stack is empty");
    }
    else{
        struct node *temp;
        temp=top;
        while(temp!=0){
            printf("%d",temp->val);
            temp=temp->link;
        }
    }
}
void main(){
    int x;
    do{
        printf("\nEnter the operation:");
        scanf("%d",&x);
        int m;
        switch(x){
            case 1:
                //int m=0;
                printf("\nEnter the value to insert:");
                scanf("%d",&m);
                push(m);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }while(x!=0);
}