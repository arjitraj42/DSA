class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int num : arr){
            mp[num]++;
        }
        unordered_set<int>set;

        for(auto it : mp){
            if(set.count(it.second)){
                return false;
            }
            set.insert(it.second);
        }
        return true;
    }
};