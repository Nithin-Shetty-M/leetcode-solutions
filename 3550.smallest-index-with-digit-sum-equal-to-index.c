/*
 * @lc app=leetcode id=3550 lang=c
 *
 * [3550] Smallest Index With Digit Sum Equal to Index
 */

// @lc code=start
int smallestIndex(int* nums, int numsSize) {
    int r,n,i;
    for(i=0;i<numsSize;i++)
    {
        r=0;
        n=nums[i];
        while(n!=0)
        {
            r+=n%10;
            n=n/10;
        }
        if(r==i)
        return i;
    }
    return -1;
}
// @lc code=end

