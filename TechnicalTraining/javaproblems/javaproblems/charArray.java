package javaproblems;
public class charArray {
    public static void main(String[] args) {
        String s1 = "hello Java";
        int len= s1.length();
        char ch[] = new char[len];

        for(int i=0; i<len; i++){
            ch[i] =s1.charAt(i);
        }
        for(char i: ch){
            System.err.print(i+" ");
        }
    }
}
