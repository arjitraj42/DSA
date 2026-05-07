class Solution {
public:
    string reverseByType(string s) {
        string lower = "";
        string charector = "";
        int i = 0;
        int n = s.size();
        while(i < n){
            if(isalpha(s[i])){
                lower += s[i];
            }else{
                charector += s[i];
            }
            i++;
        }
        reverse(lower.begin(), lower.end());
        reverse(charector.begin(), charector.end());

        string ans ="";
        int l = 0;
        int c = 0;

        for(int i = 0; i < n; i++){
            if(isalpha(s[i])){
                ans += lower[l++];
            }else{
                ans += charector[c++];
            }
        }
        return ans;
    }
};