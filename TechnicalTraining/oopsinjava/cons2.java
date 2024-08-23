package oopsinjava;
class C{
    int id;
    String name;
    float mark;
    C(int id, String name, float mark){
        this.id = id;
        this.name = name;
        this.mark = mark;
    }
    void details(){
        System.out.println(id+" " + name + " " + mark);
    }
}

public class cons2 {
    public static void main(String[] args){
        C obj = new C(1, "rohinth", 100);
        obj.details();

    }
}
