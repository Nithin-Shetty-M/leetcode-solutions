/*
 * @lc app=leetcode id=151 lang=c
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
char* reverseWords(char* s) {
  int k,i,j=0;
  char temp[strlen(s)+1];
  for(i=strlen(s)-1;i>=0;i--)
  {
    k=i;
    while(s[i]!=' ')
    {
       k--; 
       i--;
    }
    k++;
    while(s[k]!=' ')
    {
        temp[j]=s[k];
        j++;
        k++;
    }
  }  
}
// @lc code=end

