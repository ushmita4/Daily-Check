class Solution {
public void sortColors(int[] nums) {
    int r = 0;
    int w = 0;
    int b = 0;
    
    for(int col : nums) {
        switch(col) {
            case 0:
                r++;
                break;
                
            case 1:
                w++;
                break;
                
            case 2:
                b++;
                break;    
        }
    }
    
    for(int i = 0; i < nums.length; i++) {
        if(r > 0) {
            nums[i] = 0;
            r--;
        }
        else if(w > 0) {
            nums[i] = 1;
            w--;
        } else {
            nums[i] = 2;
            b--;
        }
    }
}
}
