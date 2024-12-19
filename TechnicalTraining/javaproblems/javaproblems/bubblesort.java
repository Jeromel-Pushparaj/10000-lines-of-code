package javaproblems;
public class bubblesort {
    public static void main(String[] args) {
        String s=" Welcom to the java Trainning cal";
        int count = 0;
        s=s.trim();
        int len = s.length();
        for(int i=0; i<len;i++){
            if(s.charAt(i) == ' '){
                count++;
            }
        }
        System.out.println(count+1);
    }
}
