import java.util.*;
public class binarydecimal {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-- >0)
	{
		int n=sc.nextInt();
		ArrayList<Integer>a=new ArrayList<Integer>();
		while(n>0)
		{
			int rem=n%10;
			a.add(rem);
			n/=10;
		}
		System.out.println(Collections.max(a));
	}
	sc.close();
}
}
