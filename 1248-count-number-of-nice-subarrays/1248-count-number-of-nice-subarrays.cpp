class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int left = 0, count = 0, nice = 0;

        for(int right = 0; right < nums.size(); right++){
            if(nums[right] % 2 != 0){
                nice++;
            }

            while(nice > k){
                if(nums[left] % 2 != 0){  
                    nice--;
                }
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};