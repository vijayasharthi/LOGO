// #include<stdio.h>
// #define N 5
// int stack[N];
// int top=-1;
// void push(){
//     int a;
//     printf("Enter data");
//     scanf("%d",&a);
//     if(top==N-1){
//         printf("Overflow condition");
//     }
//     else{
//         top++;
//         stack[top]=a;
//     }
// }
// void pop(){
//     int item;
    
  
//     if(top==-1){
//         printf("underflow condition");
//     }
//     else{
//         item=stack[top];
//         top--;
//         printf("%d",item);
//     }
// }
// void peek(){
   
//      if(top==-1){
//         printf("the stack is empty");//isEmpty//isFull
//     }
//     else{
//        printf("%d",stack[top]);
//     }
// }
// void display(){
//     for(int i=top;i>=0;i--){
//         printf("%d",stack[i]);
//     }
// }
// void main(){
//     int oper;
    
//     do{
//         printf("Enter the operation:");
//     scanf("%d",&oper);
//         switch(oper){
//             case 1:
//              push();
//              break;
//             case 2:
//              pop();
//              break;
//             case 3:
//              peek();
//              break;
//             case 4:
//              display();
//              break;
//              default:
//              printf("Invalid choice");
            
//         }
//     }while(oper!=0);
// }
#include<stdio.h>
# define N 5
int stack[N];
int top=-1;
void push(int a){
    if(top==N-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=a;
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        int item;
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void peek(){
    if(top==-1){
        printf("The stack is empty");
    }
    else{
        printf("%d",stack[top]);
    }
}
void disp(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void main(){
int a;
int b=0;
do{
printf("Enter the value to perform operation");
scanf("%d",&a);
switch(a){
    case 1:
         
         scanf("%d",&b);
        push(b);
         break;
    case 2:
         pop();
         break;
    case 3:
     peek();
        break;
    case 4:
         disp();
         break;
    default:
        printf("Invalid choice");}
}while(a!=0);
}