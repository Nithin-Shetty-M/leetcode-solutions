/*
 * @lc app=leetcode id=3798 lang=c
 *
 * [3798] Largest Even Number
 */

// @lc code=start
char* largestEven(char* s) {
   int i;
   int n=strlen(s);
   if(n>=1)
   {
    if(s[n-1]=='2')
    return s;
    else{
        s[n-1]='\0';
        return s;
    }
   }
   else
   {
    if(s[n-1]=='1')
    return "";
    else
    return s;
   } 
}
// @lc code=end

