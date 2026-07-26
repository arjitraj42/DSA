class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int n=arr.length;
        HashMap<Integer,Integer>mp= new HashMap<>();
        HashSet<Integer>st = new HashSet<>();
 
        for(int i=0;i<n;i++){
            mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
        }
        for(var ch : mp.entrySet()){
            st.add(ch.getValue());
        }
        return mp.size()==st.size();
    }
}