package oopsinjava;
class A{
    int a;
    static int b;
    void show(){
        System.out.println(a);
    }
    static void drew(){
        System.out.println(b);
    }
}
class B{
    void show(){
        System.out.println("IN B");
    }
}

public class class1 {
public static void main(String[] args) {
    A obj = new A();
    B obj1 = new B();
    obj1.show();
    obj.a=10;
    A.b=20;
    obj.show();
    A.drew();
}
}
