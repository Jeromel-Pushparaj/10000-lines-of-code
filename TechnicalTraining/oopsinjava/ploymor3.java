package oopsinjava;
// methosd over riding
class AudiA1{
    void tire(){
        System.out.println("22 inch");
    }
    void engine(){
        System.out.println("5000cc");
    }
    void model(){
        System.out.println("Xz1");
    }
    void price(){
        System.out.println("2500000");
    }
}
class AudiA2 extends AudiA1{
    void engine(){
        System.out.println("5100cc");
    }
    void price(){
        System.out.println("5500000");
    }
}
public class ploymor3 {
    public static void main(String[] args){
        AudiA1 obj = new AudiA1();
        AudiA2 obj2 = new AudiA2();
        obj.model();
        obj2.engine();
    }
}
