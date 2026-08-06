class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        List<int[]> List = new ArrayList<>();

        for(int i =0; i < heights.length; i++){
            List.add(new int[] {heights[i], i});
        }

        List.sort((a,b) -> b[0]- a[0]);

        String[] ans = new String[names.length];
        for(int i=0; i < List.size(); i++){
            ans[i] = names[List.get(i)[1]];
        }
        return ans;

    }
}