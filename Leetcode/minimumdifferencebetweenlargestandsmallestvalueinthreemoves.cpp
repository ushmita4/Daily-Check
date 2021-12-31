class Solution {
public:
    int minDifference(vector<int>& nums) {
       int n=nums.size();
        if(n<=3)
            return 0;
        
        sort(nums.begin(),nums.end());
        int f=0,r=n-1;
        
        int res=INT_MAX;
        for(int i=0;i<=3;i++){
            int p1=f+i;
            int p2=r-(3-i);
            res=min(res,nums[p2]-nums[p1]);
        }
        return res;
    }
};
