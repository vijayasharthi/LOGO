import java.util.*;
public class Constructor{
    public static void main(String[] args) {
        Sample obj=new Sample(20,30);
    }
}
class Sample{
    int a=0, b=0, c;
    Sample(int a,int b){
        c=a+b;
        System.out.println(c);
        c=a;
        this.b=b;
        System.out.println(c);
        a=100;
        c=a+b;
        System.out.println(c);
        

    }
     
}