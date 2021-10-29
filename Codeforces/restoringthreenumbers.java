import java.io.*;
import java.util.*;


 
public class restoringthreenumbers {
    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        PrintWriter pw = new PrintWriter(System.out);
        
       int a[]=new int[4];
       a[0]=sc.ni();
       a[1]=sc.ni();
       a[2]=sc.ni();
       a[3]=sc.ni();
         Arrays.sort(a);
         pw.println((a[3]-a[0])+" "+(a[3]-a[1])+" "+(a[3]-a[2]));
        
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