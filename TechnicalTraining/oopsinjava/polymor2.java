package oopsinjava;

class I{
    void show(int... a){
        int sum=0;
        for(int i=0;i<a.length;i++){
            sum+=a[i];
        }
        System.out.println(sum);
    }
}

public class polymor2 {
    public static void main(String[] args){
        I obj = new I();
        obj.show(19,3,5);
    }
}
