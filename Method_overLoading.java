import java.util.*;
public class Method_overLoading {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int a=scan.nextInt();
        int b=scan.nextInt();
        A obj=new A();
        obj.add(a,b);
        obj.add();
    }
}
class A extends B{
    void add(int a,int b){
System.out.println(a+b);
    }

}
class B{
    void add(){
        System.out.println("MethodOverloading depends upon parameter  and its an compile time");

    }
}
