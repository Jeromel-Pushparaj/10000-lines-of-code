package oopsinjava;

class O{
    float show(double d1, double d2){
        float f=(float)(d1+d2);
        return f;
    }
    double show(float f, double d){
        return f+d;
    }
}

public class prob1 {
    public static void main(String[] args){
        O obj = new O();
        float f  = obj.show(123.33, 454.32);
        System.out.println(f);
        System.out.println(obj.show(23.2f, 45.2));

    }
}
