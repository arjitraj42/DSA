class Solution {
public:
    int maxPower(string s) {
        int i = 0;
        int longrange = 1;
        for(int j = 1; j < s.size(); j++){
            if(s[j] != s[j - 1]){
                i = j;
            }
            longrange = max(longrange, j - i + 1);
        }
        return longrange;
    }
};