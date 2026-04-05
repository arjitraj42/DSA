class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        unordered_map<char,int>mp;
        for(char c : s1){
            mp[c]++;
        }
        
        if(n > m) return false;

        for(int i = 0; i <= m - n; i++){
            unordered_map<char,int>mp2;

            for(int j = i; j < i + n; j++){
                mp2[s2[j]]++;
            }
            if(mp == mp2) return true;
        }
        return false;
    }
};