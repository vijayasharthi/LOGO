// import java.util.*;
// public class Sample{
//     public static void main(String[] args) {
//         B obj=new B();
//         obj.sip();
//     }
// }
//  class Inheritance {
//     void sip(){
//         System.out.println("A");
//     }
    
// }
// class B extends Inheritance{
//     void sip(){
//         System.out.println("B");
//     }
// }
import java.util.*;
public class Man{
    public static void main(String[] args) {
        B obj=new B();
        obj.disp();
        obj.display();
    }
}
class A {
    void disp(){
        System.out.println("A");
    }
    
}
class B extends A{
    void display(){
        System.out.println("B");

}
}
