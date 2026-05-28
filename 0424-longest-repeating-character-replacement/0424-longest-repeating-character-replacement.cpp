class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int ans = 0;
        int i = 0;
        int maxfreq = 0;
        
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;

            maxfreq = max(maxfreq, mp[s[j]]);
            int windowsize = j - i + 1;

            if(windowsize - maxfreq > k){
                mp[s[i]]--;
                i++;
            }
        ans = max(maxfreq, j - i + 1);
        }
        return ans;
    }
};