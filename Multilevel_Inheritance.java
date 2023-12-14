public class Multilevel_Inheritance {
    public static void main(String[] args) {
        C obj=new C();
        obj.d();
        obj.sip();
        obj.disp();
    }
}
class A{
    void sip(){
        System.out.println("A");
    }

}
class B extends A{
    void disp(){
        System.out.println("B");
    }

}
class C extends B{
void d(){
    System.out.println("c");
}
}
