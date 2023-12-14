import java.util.*;
 class Sum{
    int c;
   
     void Getinput(){

    Scanner scan=new Scanner(System.in);
     int a,b;

a=scan.nextInt();
b=scan.nextInt();
 c=a+b;
     }
     void display(){
        System.out.println(c);
     }
    }
class Sample{
     public static void main(String[] args) {
        
            Sum obj1=new Sum();
           // Sum obj2=new Sum();
            obj1.Getinput();
            obj1.display();
        }
     }
    