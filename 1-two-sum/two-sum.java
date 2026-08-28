class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        if(n <= 2)
            return new int[] {1,0};
        HashMap<Integer, Integer> mp = new HashMap<>();
        int[] res= new int[2];
        for(int i=0; i<n; i++){
            int req = target - nums[i];
            if(mp.get(req) != null){
                res[1] = i;
                res[0] = mp.get(req);
                return res;
            }else{
                mp.put(nums[i], i);
            }
        }
        return res;
    }
}