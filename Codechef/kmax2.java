/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		PrintWriter pr = new PrintWriter(System.out);
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while(t-- > 0){
		    int n = scn.nextInt();
		    int k = scn.nextInt();
		    int arr[] = new int[n];
		    int max = 0;
		    for(int i = 0; i < n; i++){
		        arr[i] = scn.nextInt();
		        if(arr[i] > max) max = arr[i];
		    }
		    long sum = 0;
		    for(int i = k-1; i < n; i++){
		        if(arr[i] == max) sum+=n-i;
		    }
		    pr.println(sum);
		}
		pr.flush();
	}
}
