class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
            ans += s[i];
        }
        return ans;
    }
};