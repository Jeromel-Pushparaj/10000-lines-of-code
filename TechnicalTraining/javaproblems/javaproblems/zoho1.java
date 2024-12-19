package javaproblems;
// it was the most simple and complex question zoho ever asked
// it initially zoho never ask loop based prob because they use dsa prob

public class zoho1 {
    public static void main(String[] args) {
        int a = 10;
        int b = a*2;

        for(int i = 1 ; i<= b; i++){
            if(i<a && i%2!=0){
                System.out.println(i);
            }else if(i>=a && i%2==0){
                System.out.println(i-a);
            }
        }
    }
}
