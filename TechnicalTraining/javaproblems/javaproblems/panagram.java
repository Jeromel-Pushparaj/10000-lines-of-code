package javaproblems;

public class panagram {
    public static void main(String[] args) {
        String s = "qwertyuiopasdfghjklzxcvbnm";
        char ch[] = s.toCharArray();
        boolean b[] = new boolean[26];
        for(int i=0;i<ch.length;i++){
            if(ch[i]>='a' && ch[i]<='z'){
                b[ch[i]-'a'] = true;
            }
        }
        boolean flag = true;
        for (boolean b1:b){
            if(!b1){
                flag = false;
                break;
            }
        }
        if(flag == false){
            System.out.println("Not");
        }else{
            System.err.println("Panagram");
        }

    }
}
