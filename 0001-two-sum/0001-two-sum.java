class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            mp.put(nums[i], i);
        }
        int rem = 0;
        for(int i =0; i < nums.length; i++){
            rem = target - nums[i];
            if(mp.containsKey(rem)){
                int idx = mp.get(rem);

                if(idx != i){
                    return new int[] {i, idx};
                }
            }
        }
        return new int[] {};
    }
}