import java.io.*;
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        PrintWriter pw = new PrintWriter(System.out);
        
        int T = sc.ni();
        for (int t = 0; t < T; t++) {
            int h1=0;
            int h0=0;
            int s1=0;
            int s0=0;
        	for(int i=0;i<3;i++){
        	    int a=sc.ni();
        	    if(a==1)
        	    s1++;
        	    else
        	    s0++;
        	}
        	for(int i=0;i<3;i++){
        	    int a=sc.ni();
        	    if(a==1)
        	    h1++;
        	    else
        	    h0++;
        	}
        	if(s1==h1 && s0==h0)
        	pw.println("Pass");
        	else
        	pw.println("Fail");
        }
        
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
