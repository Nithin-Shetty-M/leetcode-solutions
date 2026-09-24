/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
 int k=0,i;
 for(i=1;i<numsSize;i++)
 {
    if(nums[k]<nums[i])
    {
        k++;
        nums[k]=nums[i];
    }
 }
 k++;
 return k;   
}
// @lc code=end

