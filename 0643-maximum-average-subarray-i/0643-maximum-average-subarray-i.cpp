class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        double maxsum = 0;
        double avg=0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        maxsum = sum;
        
        for(int i = k; i < n; i++){
            sum = sum+ nums[i] - nums[i - k];
            maxsum = max(maxsum, sum);
        }
            avg = maxsum/k;
        return avg;  
    }
};