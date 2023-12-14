import java.util.*;
public class MAss{
    static int a=   100;
    int b=0;
    public static void main(String[] args) {
        int a=50;
        
    
         A obj=new A();
         
         obj.display(a);
                  
    }
}
 class A extends M{
  int a=100;
    void display(int a){
      //this.a=a;
      a=this.a;
        System.out.println(a);
        System.out.println("Method overriding");
        
    }
     
    
}

