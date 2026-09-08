class Solution {
    public int findMiddleIndex(int[] nums) {
        int leftsum = 0;
        int rightsum = 0;
        int tsum = 0;
        for(int i=0; i <nums.length; i++){
            tsum += nums[i];
        }
        for(int i = 0; i < nums.length; i++){
            rightsum = tsum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
}