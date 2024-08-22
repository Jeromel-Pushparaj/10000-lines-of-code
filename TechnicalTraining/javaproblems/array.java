package javaproblems;
import java.util.*;
public class array {
    public static void main(String[] args){
        // int[] arr = {1, 3, 5, 6, 7, 8, 9};
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        int size = arr.length;
        for(int i=0;i<size;i++){
            arr[i] = sc.nextInt();
        } 
               
        for (int i : arr) {
            System.out.print(i + " ");
        }
        sc.close();
    }
}
