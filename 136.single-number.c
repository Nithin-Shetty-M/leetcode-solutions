/*
 * @lc app=leetcode id=136 lang=c
 *
 * [136] Single Number
 */

// @lc code=start
int singleNumber(int* nums, int numsSize) {
 int i,j,flag=0;
 if(numsSize==1)
 return nums[0];
 for(i=0;i<numsSize-1;i++)
 {
    flag=0;
    for(j=i+1;j<numsSize;j++)
    {
        if(nums[i]==nums[j])
        {
           flag=1;
           break; 
        }
    }
    if(flag==0)
    return nums[i];
 }
 return 0;   
}
// @lc code=end

