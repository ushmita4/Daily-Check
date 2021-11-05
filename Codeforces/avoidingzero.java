import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		x:while(t-->0) {
			int n=s.nextInt();
			Integer [] a=new Integer[n];
			long sm=0;
			for(int i=0;i<n;i++) {
				a[i]=s.nextInt();
				sm+=a[i];
			}
			if(sm==0){System.out.println("NO");
			   continue x;}
			
				Arrays.sort(a);
				System.out.println("YES");
				if(sm>0) {
					
					for(int i=n-1;i>=0;i--) 
						System.out.print(a[i]+" ");
					
				}
				if(sm<0) {
					for(int i=0;i<n;i++) 
						System.out.print(a[i]+" ");
					}
				System.out.println();
			
		}
	}
}
