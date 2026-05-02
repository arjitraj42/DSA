class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        int n = nums.size();
        double maxsum =INT_MIN;
        double sum = 0;
        for(int i = 0; i <k; i++){
            sum += nums[i];
        }
        maxsum = max(sum,maxsum);
        for(int i = k; i < n; i++){
            sum -= nums[i - k];
            sum += nums[i];
            maxsum = max(sum,maxsum);
        }
        avg = maxsum/k;
        return avg;
    }
};