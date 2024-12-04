
import java.util.*;
public class Problem3 {
   public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int count = 0;
    System.out.print("[");
    for (int i =1; i<=n; i++){
        if(i==1){
            System.out.print(i);
        }else{
            System.out.print(", " + i);
        }
    }
    System.out.println("]");
   }
}

