import java.io.*;
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        PrintWriter pw = new PrintWriter(System.out);
        
        int n=sc.ni();
        int a[]=new int[n];
        
        for(int i=0;i<n;i++){
            a[i]=sc.ni();
        }
        Arrays.sort(a);
        long max=0;
        for(int i=0;i<n;i++){
            long x=a[i];
            if(max<x*(n-i))
             max=x*(n-i);
        }
        pw.println(max);
        
        pw.close();
    }
    
    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;
 
        public FastScanner() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
 
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int ni() {
            return Integer.parseInt(next());
        }
    }
}
