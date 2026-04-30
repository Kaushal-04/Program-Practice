class Solution {
    public int[] findErrorNums(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        int duplicate = -1;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
            if (!set.add(num)) {
                duplicate = num;
            }
        }

        int n = nums.length;
        int expectedSum = n * (n + 1) / 2;
        int missing = expectedSum - (actualSum - duplicate);

        return new int[]{duplicate, missing};
    }
}
