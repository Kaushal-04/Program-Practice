class Solution {
    public int[][] merge(int[][] intervals) {
        ArrayList<int[]> res = new ArrayList<>();
        int n = intervals.length;
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        res.add(intervals[0]);
        for(int i=1; i<n; i++){
            int e = res.get(res.size()-1)[1];
            if(intervals[i][0] <= e){
                res.get(res.size() - 1)[1] = Math.max(e, intervals[i][1]);
            }else{
                res.add(intervals[i]);
            }
            
        }
        return res.toArray(new int[res.size()][]);
    }
}