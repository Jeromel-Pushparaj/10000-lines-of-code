import java.util.*;
public class Dronelocation {
   public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       int num1 = sc.nextInt();
       int num2 = sc.nextInt();
       if(num1 > 0 && num2 > 0){
        System.out.println("1st Quadrant");
       }else if (num1 < 0 && num2 > 0){
            System.out.println("2nd Quadrant");
       }else if(num1 > 0 && num2 < 0){
        System.out.println("3rd Quadrant");
       }else if(num1 < 0 && num2 < 0){
        System.out.println("4th Quadrant");
       }else{
        System.out.println("input invalid");
       }
   } 
}
