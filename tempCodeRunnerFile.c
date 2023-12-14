#include<stdio.h>
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