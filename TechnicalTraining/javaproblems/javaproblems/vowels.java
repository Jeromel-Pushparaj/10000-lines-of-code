package javaproblems;
public class vowels {
    public static void main(String[] args) {
        String s = "Hello";
        int size = s.length();
        int count = 0;
        for(int i=0;i<size;i++){
            char c = s.charAt(i);
            if(c=='a' || c == 'e' || c =='i' || c =='o' || c=='u'){
                System.out.println(c + "\t");
                count++;
            }
        }
        System.err.println(count);
    }
}
