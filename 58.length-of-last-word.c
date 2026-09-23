/*
 * @lc app=leetcode id=58 lang=c
 *
 * [58] Length of Last Word
 */

// @lc code=start
int lengthOfLastWord(char* s) {
  int len=strlen(s);
  int count=0;
  for(int i=len-1;i>=0;i--)
  {
    if(s[i]==' ')
    continue;
    else
    {
        while(i>=0 && s[i]!=' '){
        count++;
        i--;
    }
        break;
    }
  }
  return count;  
}
// @lc code=end

