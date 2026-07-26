class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer,Integer> map = new HashMap <>();

        for(int i = 0; i < arr.length; i++){
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        Set<Integer> seen = new HashSet <> ();

        for(var ch : map.entrySet()){
            int count = ch.getValue();
            if(seen.contains(count)){
                return false;
            }
            seen.add(count);
        }
        return true;
    }
}