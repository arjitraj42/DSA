class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i = 0;
        int longrange = 1;
        
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] <= nums[j - 1]){
                i = j;
            }
          
            longrange = max(longrange, j - i + 1);
        }
        return longrange;
    }
};