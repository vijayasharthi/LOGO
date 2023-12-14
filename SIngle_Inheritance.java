import java.util.*;
public class SIngle_Inheritance {
    public static void main(String[] args) {
        B obj=new B();
        //obj.sip();
        obj.dis();
        obj.sip();

    }
}
class A{



void sip(){
    
    System.out.println("It will be access by sub class oda object");
    
}
}

class B extends A{
    B(){
        System.out.println("Sub Constructor");
    }
    void dis(){
        System.out.println("B");
    }

}
