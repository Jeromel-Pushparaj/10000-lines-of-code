package javaproblems;
import java.util.*;
public class anagram {
    public static void main(String[] args) {
        String s1 = "care";
        String s2 = "race";

        char c1[] =  s1.toCharArray();
        char c2[] =  s2.toCharArray();

        Arrays.sort(c1);
        Arrays.sort(c2);

        boolean bol = Arrays.equals(c1,c2);
        System.out.println(bol);

    }
}
