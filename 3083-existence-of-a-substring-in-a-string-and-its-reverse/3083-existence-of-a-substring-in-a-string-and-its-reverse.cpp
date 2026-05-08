class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int n= s.size();
        for(int i = 0; i < n - 1; i++){
            string sub = s.substr(i,2);

            if(rev.find(sub) != string::npos){
                return true;
            }
        }
        return false;
    }
};