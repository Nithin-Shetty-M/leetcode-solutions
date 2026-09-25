/*
 * @lc app=leetcode id=151 lang=c
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
char* reverseWords(char* s) {
  int k,i;
  char temp[strlen(s)];
  for(i=strlen(s)-1;i>=0;i++)
  {
    k=0;
    while(s[i]!=' ')
    {
       k++; 
       i--;
    }
  }  
}
// @lc code=end

