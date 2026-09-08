class Solution {
    public int pivotIndex(int[] nums) {
        int lefts = 0;
        int rights = 0;
        int tsum = 0;
        for(int i = 0; i <nums.length; i++){
            tsum += nums[i];
        }

        for(int i = 0; i < nums.length; i++){
            rights = tsum - lefts - nums[i];
            if(lefts == rights){
                return i;
            }

            lefts+= nums[i];
        }
        return -1;
    }
}