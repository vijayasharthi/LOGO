import java.util.*;
public class Super_Keyword {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int a,b;
        a=scan.nextInt();
        b=scan.nextInt();
        B obj=new B(b);
       // A obj1=new A(a);
    }
}
class A{
    A(){
 System.out.println("A is constructor");
    }
    A(int a){
        System.out.println("A");

    }
    void f(){
        System.out.println("A");
    }

}
class B extends A{
    void dis(){
        System.out.println("B");
    }
    B(int b){
       // super(50);
        System.out.println("B is constructor");
    }
}
