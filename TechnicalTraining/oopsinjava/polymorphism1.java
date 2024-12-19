package oopsinjava;
// Method overloading
class cse{
    cse(){
        System.out.println("In Cse");
    }
    cse(int a){
        System.out.println(a);
    }
    void show(int a){
        System.out.println("Hello");
    }
    void show(float f){
        System.out.println("Hi");
    }
    void show(int a, int b){
        System.out.println(a+b);
    }
}

public class polymorphism1 {
    public static void main(String[] args){
        cse obj = new cse();
        cse obj1 = new cse(10);
        obj1.show(10);
        obj1.show(12.4f);
        obj1.show(210,20);
    }
}
