class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashSet<Integer> mp = new HashSet<>();
        ArrayList<Integer> result = new ArrayList<>();
        int n = nums.length;
        for(int i = 0; i < n; i++){
            mp.add(nums[i]);
        }

        for(int i = 1; i <= n; i++){
            if(!mp.contains(i)){
                result.add(i);
            }
        }
        return result;
    }
}