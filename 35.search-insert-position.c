/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

// @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
   int i,pos=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        
            return i;
        
        else if(target>nums[i])
        
            pos=i+1;
        
        else
        
            break;
        
    }
    return pos; 
}
// @lc code=end

