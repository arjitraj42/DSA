class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp1, mp2;
        vector<int>ans;
        int a  = s.size();
        int b = p.size();
        for(char c : p){
            mp1[c]++;
        }
        if(b > a) return ans;

        for(int i = 0; i < b; i++){
            mp2[s[i]]++;
        }
        if(mp1 == mp2) ans.push_back(0);
        for(int i = b; i < a; i++){
            mp2[s[i]]++;

            mp2[s[i- b]]--;
            if(mp2[s[i - b]] == 0){
                mp2.erase(s[i - b]);
            }
            if(mp1 == mp2) ans.push_back(i - b + 1);
        }
        return ans;
    }
};