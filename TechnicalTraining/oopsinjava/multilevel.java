package oopsinjava;

class GrandParent{
    void land(){
        System.out.println("LAnd");
    }
    void house(){
        System.out.println("House");
    }
}

class Parent extends GrandParent{
    void car(){
        System.out.println("car");
    }
    void bike(){
        System.out.println("Bike");
    }
}
class Chile extends Parent{
    void cycle(){
        System.out.println("Cycle");
    }
}

public class multilevel {
    public static void main(String[] args){
        // GrandParent gp = new GrandParent();
        Parent p = new Parent();
        Chile c = new Chile();
        p.house();
        p.land();
        System.out.println("\nChile\n -----------------");
        c.land();
        c.house();
        c.car();
        c.bike();
        c.cycle();
    }
}
