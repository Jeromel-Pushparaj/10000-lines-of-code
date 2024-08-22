package javaproblems;
public class stringprob {
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "Hello";

        String s3 = new String("hello");
        String s4 = new String("Hello");

        System.out.println(s1==s3);
        System.out.println(s2==s4);

        System.out.println(s1.equals(s3));
        System.out.println(s2.equals(s4));
    }
}
