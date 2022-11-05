
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int biggest = 0;
        if(s.length()==0)
        return 0;
            int curLength =1;
             vector<int> curChars;
             curChars.push_back(s[0]);
            for (size_t j = 1; j < s.length(); j++)
            {    
                auto it = find(curChars.begin(), curChars.end(), s[j]);
                if(it==curChars.end())
                {
                    curChars.push_back(s[j]);
                    curLength++;
                }
                else{
                    if(curLength>biggest)
                       {biggest = curLength;
                     }
                      int index = it - curChars.begin();
                      for (size_t k = 0; k <= index; k++)
                      {
                      curChars.erase(curChars.begin());
                      }
                      curLength-=(index);
                      curChars.push_back(s[j]);
 
                }
            }
            if(curLength>biggest)
               biggest = curLength;
             return biggest; 
        }
      
    
};

int main()
{
    Solution s;
    string str = "abcabcbb";
    int num =  s.lengthOfLongestSubstring(str);
}