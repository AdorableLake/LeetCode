int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int i = 1; i < numsSize; i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}

作者：力扣官方题解
链接：https://leetcode.cn/problems/running-sum-of-1d-array/solutions/962723/yi-wei-shu-zu-de-dong-tai-he-by-leetcode-flkm/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
