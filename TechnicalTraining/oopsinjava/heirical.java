package oopsinjava;

class parent{
    void land(){
        System.out.println("Land");
    }
    void house(){
        System.out.println("House");
    }
}

class child1 extends parent{
    void car(){
        System.out.println("car");
    }
}
class child2 extends parent{
    void bike(){
        System.out.println("bike");
    }
}

public class heirical {
    public static void main(String[] args){
        child1 obj1 = new child1();
        System.out.println("child1");
        obj1.land();
        obj1.car();
        System.out.println("\nchild2");
        child2 obj2 = new child2();
        obj2.house();
        obj2.bike();
    }
}
