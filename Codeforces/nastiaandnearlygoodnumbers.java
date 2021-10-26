import java.util.*;
public class nastiaandnearlygoodnumbers {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			int a=sc.nextInt();
			int b=sc.nextInt();
			if(b==1) System.out.println("NO");
			else System.out.println("YES"+"\n"+a+" "+(long)a*b+" "+(long)a*(b+1));
		}
	}
}
