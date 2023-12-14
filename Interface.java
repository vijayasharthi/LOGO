public class Interface {
    public static void main(String[] args) {
        B obj=new B();
        obj.sip();
    }
}
interface  Vij{
 void sip();
}
class B implements Vij{
public void sip(){
    System.out.println("ITS Interface");
}
}