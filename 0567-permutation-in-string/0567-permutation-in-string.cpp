class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int  a = s1.size();
        int b = s2.size();
        unordered_map<char,int>mp1,mp2;
        for(char ch : s1){
            mp1[ch]++;
        }
        if(s1.size() > s2.size()) return false;
        for(int i = 0; i <a; i++){
            mp2[s2[i]]++;
        }

        if(mp1 == mp2) return true;
        for(int i = a; i < b; i++){
            mp2[s2[i]]++;

            mp2[s2[i - a]]--;

            if(mp2[s2[i - a]] == 0){
                mp2.erase(s2[i - a]);
            }
            if(mp1 == mp2) return true;
        }
        return false;
    }
};