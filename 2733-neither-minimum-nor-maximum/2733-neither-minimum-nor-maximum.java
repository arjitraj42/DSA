class Solution {
    public int findNonMinOrMax(int[] nums) {
       TreeSet<Integer> set = new TreeSet<>();

       for(int i = 0; i < nums.length; i++){
        set.add(nums[i]);
       }

       if(set.size() < 3){
        return - 1;
       } 

       set.pollFirst();
       set.pollLast();

       return set.first();
    }
}