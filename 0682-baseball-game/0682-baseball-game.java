class Solution {
    public int calPoints(String[] operations) {
        Stack<Integer>st = new Stack<>();

        int n = operations.length;
        for(int i = 0; i < n; i++){
            if(operations[i].equals ("+")){
                int top = st.pop();
                int newscore = top + st.peek();
                st.push(top);
                st.push(newscore);
            }
            else if(operations[i].equals("D")){
                
                int x = st.peek() * 2;
                st.push(x);
            }
            else if(operations[i].equals ("C")){
                st.pop();
            }else{
                st.push(Integer.parseInt(operations[i]));
            }
        }
        int ans = 0;
        while(!st.isEmpty()){
            ans += st.peek();
            st.pop();
        }
        return ans;
    }
}