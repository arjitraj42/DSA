class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int dist = 0;
         int maxdist = 0;
        int n = colors.size();
        for(int i = 0; i <n; i++){
            for(int j = i; j < n; j++){
                if(colors[i] != colors[j]){
                    dist = abs(i - j);
                }
            }
            maxdist = max(maxdist,dist);    
        }
        return maxdist;
    }
};