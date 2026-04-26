class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>st;
        int n = operations.size();
        for(int i = 0; i < n; i++){
            string o = operations[i];

            if(o == "C"){
                st.pop_back();
            }else if(o == "D"){
                st.push_back(2*st.back());
            }else if(o == "+"){
                st.push_back(st[st.size() - 1] + st[st.size()-2]);
            }else{
                st.push_back(stoi(o));
            }
        }
        int sum = 0;
        for(int i = 0; i < st.size(); i++){
            sum += st[i];
        }
        return sum;
    }
};