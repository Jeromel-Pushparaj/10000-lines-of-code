package javaproblems;
public class StringToChar {
	public static void main(String[] args) {
		char ch[] = {'h', 'e', 'l', 'l','o'};
		int len = ch.length;
		String s = "";
		for (int i=0;i<len;i++) {
			s+=ch[i];
		}
		System.out.println(s);
	}
}