package oopsinjava;
//Sing level inheritance
class J{
    J(){
        System.out.println("In J");
    }
    void show1(){
        System.out.println("IN Show");
    }
}

class H extends J{
    H(){
        System.out.println("In H");
    }
    void show2(){
        System.out.println("In H Show");
    }
}

public class inheritance1 {
    public static void main(String[] args){
        H objh = new H();
        objh.show2();
        objh.show1();
    }
}
