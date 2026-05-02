class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int j = 0;
        int n = s.size();
        int maxlen = 0;
        for(int i = 0; i < n; i++){
            while(mp.find(s[i]) != mp.end()) {
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    mp.erase(s[j]);
                }
                j++;
            }
            mp[s[i]]++;
            maxlen = max(maxlen,i - j +1);
        }
        return maxlen;
    }
};