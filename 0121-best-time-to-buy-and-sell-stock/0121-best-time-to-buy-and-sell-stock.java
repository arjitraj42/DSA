class Solution {
    public int maxProfit(int[] prices) {
        int j = 0;
        int maxp = 0;
        int p = 0;
        for(int i = 0; i < prices.length; i++){
            if(prices[i] < prices[j]){
                j = i;
            }
            p = prices[i] - prices[j];
            maxp= Math.max(maxp,p);
        }
        return maxp;
    }
}