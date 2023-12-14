public class Mathod_Overridding {
    public static void main(String[] args) {
        A obj=new A();
    obj.display();
    }
}
class A extends B{
    void display(){
        System.out.println("A is an overridding because its sub class it canoverwriiten the parent calss then they produce an output");
}}
class  B{
    void display(){
        System.out.println("Overridding");
    }
}
