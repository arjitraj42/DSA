class Solution {
    public int longestSubarray(int[] nums) {
        int j = 0;
        int ans = 0;
        int zeroco = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                zeroco++;
            }
            while(zeroco > 1){
                if(nums[j] == 0){
                    zeroco--;
                }
                j++;
            }
            ans = Math.max(ans,i - j);
        }
        return ans;
    }
}