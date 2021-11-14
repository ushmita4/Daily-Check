class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int total_steps=tickets[k];
        
        for(int i=0;i<k;i++){
            if(tickets[i]<tickets[k])
                total_steps=total_steps+tickets[i];
            else
                total_steps += tickets[k];
        }
        for(int i=k+1;i<tickets.length;i++){
            if(tickets[i]<tickets[k])
             total_steps=total_steps+tickets[i];
            else
                total_steps += tickets[k] - 1;
        }
        return total_steps;
    }
}
