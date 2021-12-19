class Solution {
    
    public String decodeString(String s) {
        char[] string = s.toCharArray();
        
        return helper(string, 0);
    }
    
    private String helper(char[] string, int index) {
        
        // base condition
        if(index >= string.length) {
            return "";
        }
        
        String result = "";
        
        if(string[index] >= 'a' && string[index] <= 'z') {
            result = string[index] + helper(string, index + 1);
        }
        
        if(string[index] == ']') {
            // as soon as ']' is encontered, return the result
			// Here, index will be used as a reference to proceed after ']'
            return result + "-" + index;
        }
        
        String digit = "";
        if(string[index] >= '0' && string[index] <= '9') {
            while(index < string.length && string[index] >= '0' && string[index] <= '9') {
                digit += string[index];
                index ++;
            }
        }
        
        if(digit.length() >= 1) {
            int count = Integer.parseInt(digit);
          
            String temp = helper(string, index + 1);
            String[] temp2 = temp.split("-");
            
            for(int i = 0; i < count; i++) {
                result = result + temp2[0];
            }
            
            result = result + helper(string, Integer.parseInt(temp2[1]) + 1);
        }
        
        return result;
    }
}
