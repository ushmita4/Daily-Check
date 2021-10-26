class Solution {
    public int[] diStringMatch(String s) {
        int res[]=new int[s.length()+1];
        int counterI=0;
        int counterD=s.length();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='I')
                res[i]=counterI++;
            else
                res[i]=counterD--;
        }
        res[s.length()]=(s.charAt(s.length()-1)=='I')?counterD:counterI;
        return res;
    }
}
