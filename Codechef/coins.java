/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef{
   public static void main (String[] args) throws java.lang.Exception {
       
        HashMap<Long, Long> memo = new HashMap<>();
        Scanner sc=new Scanner(System.in);
        while(sc.hasNextInt()){
            System.out.println(getCoins(sc.nextLong(), memo));
        }
    }

    public static long getCoins(long n,HashMap<Long, Long>map){
            if(n<12)
                return n;
            if(map.containsKey(n))
                return map.get(n);
            map.put(n,getCoins(n/2, map)+getCoins(n/3, map)+getCoins(n/4, map));
            return map.get(n);
        }
}
