package oopsinjava;

class GrandParent{
    void land1(){
        System.out.println("LAnd");
    }
    void house1(){
        System.out.println("House");
    }
}

class Parent1 extends GrandParent{
    void car1(){
        System.out.println("car");
    }
    void bike1(){
        System.out.println("Bike");
    }
}
class Chile extends Parent1{
    void cycle1(){
        System.out.println("Cycle");
    }
}

public class multilevel {
    public static void main(String[] args){
        // GrandParent gp = new GrandParent();
        Parent1 p = new Parent1();
        Chile c = new Chile();
        p.house1();
        p.land1();
        System.out.println("\nChile\n -----------------");
        c.land1();
        c.house1();
        c.car1();
        c.bike1();
        c.cycle1();
    }
}
