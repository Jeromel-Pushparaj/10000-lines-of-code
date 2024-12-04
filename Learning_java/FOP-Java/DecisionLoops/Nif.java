import java.util.*;

class Nif{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if(age>18){
            System.out.println("Eligible to vote");
            if(age>60){
                System.out.println("You are a seniyer citizen");
            }
        }
    }
}