class Solution {
   public boolean isPowerOfTwo(int n) {
    if(n==1) return true;
 
    boolean result = false;
 
    while(n>0){
        int m = n%2;
        if(m==0){
            n=n/2;
            if(n==1)
                return true;
        }else{
            return false;
        }
    }
 
    return result;
}
}
