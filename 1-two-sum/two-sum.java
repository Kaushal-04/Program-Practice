class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] res = new int[2];
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            int t = target - nums[i];
            if(mp.containsKey(t)){
                res[0] = i;
                res[1] = mp.get(t);
                return res;
            }
            mp.put(nums[i], i);
        }
        return res;
    }
}