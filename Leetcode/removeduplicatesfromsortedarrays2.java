class Solution {
    public int removeDuplicates(int[] nums) {
        int k=2; 
        if(nums.length<k) return nums.length; 
        int i,j;
         for(i=k,j=k;i<nums.length;i++){
             if(nums[j-k]!=nums[i]) nums[j++]=nums[i];
         }
         return j;
    }
}
