import java.util.*;
public class Assignment{
  public static void main(String[] args) {
    Scanner scan=new Scanner(System.in);
    int a=scan.nextInt();
     B obj=new B(a);
  }
  }
  class B{
    
    public B(int b) {
                if(b%2==0){
                    checkNumber();
                }
                else{
                    System.out.println("odd");
                }
    }

    void checkNumber(){
        System.out.println("happy number");
    }
    
  }