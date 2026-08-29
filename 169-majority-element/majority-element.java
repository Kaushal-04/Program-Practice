//use two variables candidate = nums[0] and count = 1 and start from 2nd element if count == 0 new candidate , if element == candidate +1, else -1
class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int candidate = nums[0], count = 1;
        for(int i=1; i<n; i++){
            if(count > n/2)
                return candidate;
            if(count == 0){
                candidate = nums[i];
                count = 1;
            }else if(candidate == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
}