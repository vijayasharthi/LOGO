public class Abstract{
    public static void main(String[] args) {
        B obj=new B();
        obj.disp();
        obj.hi();
    }
}
abstract class A{
    void disp(){
        System.out.println("A");
    }
    abstract void hi();

}
class B extends A{
  
     void hi(){
       System.out.println("A abstaction");
        
    }
}
