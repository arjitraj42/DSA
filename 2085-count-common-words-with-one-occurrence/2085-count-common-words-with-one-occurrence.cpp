class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1,mp2;
        int count = 0;
        for(string w : words1){ 
        mp1[w]++;
        }
        for(string w : words2) {
            mp2[w]++;
        }
        for(auto &it : mp1){
            if(it.second == 1 && mp2[it.first] == 1){
                count++;
            }
        }
        return count;
    }
};