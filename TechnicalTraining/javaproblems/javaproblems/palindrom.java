package javaproblems;
public class palindrom {
    public static void main(String[] args){
        int n = 111;
        int sum = 0;
        int temp = n;
        while(temp>0){
            int rev = temp%10;
            sum = (sum*10) + rev;
            temp = temp / 10;
        }
        if(sum == n){
            System.out.println("It is Palindrom");
        }
        else{
            System.out.println("It is not a Palindrom");
        }
    }    
}
