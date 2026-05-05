class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int sum = 0;
       int n = nums.size();
       int j = 0;
       int len = INT_MAX;
       for(int i = 0; i < n; i++){
        sum += nums[i];
        while( sum >= target){
            sum -= nums[j];
            len = min(len,i - j + 1);
            j++;
        }
       }
       if(len==INT_MAX) return 0;
       return len;
    }
};