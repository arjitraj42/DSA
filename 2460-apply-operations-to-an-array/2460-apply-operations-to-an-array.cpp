class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i] + nums[i + 1];
                nums[i+1]=0;
            }else{
                continue;
            }
        }
        int j=0;
        int k=nums.size();
        for(int i=0;i<k;i++){
            if(nums[i] !=0 ){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return nums;

    }
};