/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
int strStr(char* haystack, char* needle) {
   int i,j,k;
   if(strlen(haystack)<strlen(needle))
   return -1;
   for(i=0;i<=strlen(haystack)-(strlen(needle)-2);i++)
   {
    j=i;
    k=0;
    while(k<strlen(needle) && j<strlen(haystack) && haystack[j]==needle[k] )
    {
        j++;
        k++;
    }
    if(strlen(needle)==k)
    return i;
   } 
   return -1;
}
// @lc code=end

