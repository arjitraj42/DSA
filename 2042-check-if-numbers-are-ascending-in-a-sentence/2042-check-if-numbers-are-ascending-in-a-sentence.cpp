class Solution {
public:
    bool areNumbersAscending(string s) {
        int comp = 0;
        int n  = s.size();
        for(int i = 0; i < n; i++){
            if(isdigit(s[i])){

                int ans = 0;

                while(i < n && isdigit(s[i])){
                    ans = ans * 10 + (s[i] - '0');
                    i++;
                }
                if(ans <= comp){
                    return false;
                }
                comp = ans;
            }
        }
        return true;
    }
};