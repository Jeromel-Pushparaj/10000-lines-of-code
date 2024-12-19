package exceptionHandling;
import java.util.*;
public class inputmismatchexception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt();
            System.out.println(n);
        }catch(InputMismatchException e){
            System.out.println(e);
        }
        sc.close();
    }
}
