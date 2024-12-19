package oopsinjava;

class Alpha{
    Alpha(){
        System.out.println("In A Cons");
    }
    String show(String s){
        return s;
    }
}

public class javaconstructor{
    public static void main(String[] args){
        Alpha obj = new Alpha();
        Alpha obj2 = new Alpha();
        System.out.println(obj.show("Hello, Rohinth"));
    }
}