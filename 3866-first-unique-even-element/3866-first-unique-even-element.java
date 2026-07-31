class Solution {
    public int firstUniqueEven(int[] nums) {
        LinkedHashMap<Integer,Integer> mp = new LinkedHashMap<>();

        for(int i = 0; i < nums.length; i++){
            if(nums[i] % 2 == 0){
                mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
            }
        }
        for(Map.Entry<Integer,Integer> ch : mp.entrySet()){
            if(ch.getValue() == 1){
                return ch.getKey();
            }
        }
        return -1;
    }
}