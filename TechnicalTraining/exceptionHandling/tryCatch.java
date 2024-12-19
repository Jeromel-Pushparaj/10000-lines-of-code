package exceptionHandling;
import java.util.*;
public class tryCatch {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int a = sc.nextInt();
    int b = sc.nextInt();

    try{
        int c = a/b;
        System.out.println(c);
    }catch(ArithmeticException e){
        System.out.println(e);
    }finally{
        System.out.println("Program End");
    }
    sc.close();
}
}
