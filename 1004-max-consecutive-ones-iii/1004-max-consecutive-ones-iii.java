class Solution {
    public int longestOnes(int[] nums, int k) {
        int ans  = 0;
        int j = 0;
        int zeroco = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                zeroco++;
            }
            while(zeroco > k){
                if(nums[j] == 0){
                    zeroco--;
                }
                j++;
            }
            ans =Math.max(ans, i - j + 1);

        }
        return ans;
    }
}