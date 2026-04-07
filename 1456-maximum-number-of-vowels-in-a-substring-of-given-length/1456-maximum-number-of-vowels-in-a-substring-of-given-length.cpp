class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int cvow = 0;
        int ans= 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] =='o' ||s[i] =='u'){
                cvow++;
            }
        }
            ans = cvow;
            
        for(int i = k; i < n; i++){
            if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] =='o' ||s[i] =='u'){
                cvow++;
            }
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'|| s[i-k]=='o'||s[i-k] =='u'){
                cvow--;
            }

        ans = max(ans, cvow);
        }
        return ans;
    }
};