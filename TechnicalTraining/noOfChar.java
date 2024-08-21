public class noOfChar {

	public static void main(String[] args) {
		String s = "aabbbc";
		String com = "";
		int len = s.length();
		for (int i = 0; i<len;i++) {
			int count=0;
			char ch1 = s.charAt(i);
			for(int j=i; j<len;j++) {
				char ch2 = s.charAt(j);
				if(ch1==ch2) {
					count++;
				}
			}
			String s1 = String.valueOf(s.charAt(i));
			if(!com.contains(s1)) {
				com+=s.charAt(i);
				System.out.println(ch1+" "+ count);
			}
		}
	}

}