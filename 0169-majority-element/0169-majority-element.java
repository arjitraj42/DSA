class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        List<Integer> ans = new ArrayList<>();
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i = 0; i < n; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        }
        for(Map.Entry<Integer,Integer> en : mp.entrySet()){
            if(en.getValue() > n/2){
                return en.getKey();
            }
        }
        return -1;
    }
}