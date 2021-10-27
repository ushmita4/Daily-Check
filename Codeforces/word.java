import java.util.Scanner;
 
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
 
		String s = sc.nextLine();
		int upper = 0;
		for(int i = 0; i < s.length(); i++)
			if(s.charAt(i) <= 90)
				upper++;
		System.out.println(upper > s.length()/2 ? s.toUpperCase(): s.toLowerCase());
	}
}
