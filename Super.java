public class Super {
    public static void main(String[] args) {
        B obj=new B();
        obj.dis();
    }
}
class A{
     void dis(){
        System.out.println("A");
     }
}

class B extends A{
    void dis(){
        System.out.println("B");
        super.dis();
    }

}