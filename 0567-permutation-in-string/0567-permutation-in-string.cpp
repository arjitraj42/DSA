class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp,mp2;
        int a = s1.size(); 
        int b = s2.size();
        for(char c : s1){
            mp[c]++;
        }
        if( a > b) return false;
        for(int i = 0; i< a; i++){
            mp2[s2[i]]++;
        }
            if(mp == mp2)  return true;

            for(int i = a; i < b; i++){
                mp2[s2[i]]++;

                mp2[s2[i-a]]--;
                
                if(mp2[s2[i-a]] == 0){
                mp2.erase(s2[i-a]);   
            
                }
                if(mp == mp2) return true;
            }
            return false;
    }
};