class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        string last = "";
        for(int i = 0; i < words.size(); i++){
            string w = words[i];
            string temp = w;
            sort(temp.begin(), temp.end());
            if(temp != last){
                ans.push_back(w);
                last = temp;
            }
        }
        return ans;
    }
};