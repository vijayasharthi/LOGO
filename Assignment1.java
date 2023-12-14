import java.util.*;
public class Assignment1 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
int a=scan.nextInt();
int b=scan.nextInt();
B obj=new B(a,b);
    }
}class B{
B(int a,int b){
  add(a,b);
  sub(a,b);
  mul(a,b);
  div(a,b);
}

void add(int a,int b){
    System.out.print("Addition:");
System.out.println(a+b);
}

void sub(int a,int b){
     System.out.print("Subraction:");
System.out.println(a-b);
}

void mul(int a,int b){
     System.out.print("Multiplication:");
System.out.println(a*b);
}

void div(int a,int b){
     System.out.print("Division:");
System.out.println(a/b);
}
}
