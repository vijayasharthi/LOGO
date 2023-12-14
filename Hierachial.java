public class Hierachial {
    public static void main(String[] args) {
        A obj=new A();
        B obj1=new B();
        obj.dis();
        obj1.sip();
    }
}
class A{
        void dis(){
            System.out.println("A");
        }
}
class B{
    void sip(){
        System.out.println("B");
    }

}
