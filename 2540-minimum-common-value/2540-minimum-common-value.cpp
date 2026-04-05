class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        vector<int>ans;

        for(auto it : nums1){
            if(s2.find(it) != s2.end()){
                return it;
            }
        }
        return -1;
    }
};