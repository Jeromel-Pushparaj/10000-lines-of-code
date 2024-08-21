import java.util.Scanner;
public class greatest {
    public int great(int a, int b){
        if(a>b){
            return a;
        }else{
            return b;
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        greatest g = new greatest();
        int result = g.great(g.great(a,b), c);
        System.out.println("The greatest number is "+ result);
        sc.close();
    }
}
