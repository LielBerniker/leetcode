#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
#include <cstdlib>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::map<char, char> mS;
        std::map<char, char> mT;
        if(s.length() != t.length())
        return false;
         
        for (size_t i = 0; i < s.length(); i++)
        {
           if ((mS.find(s[i]) == mS.end()) && (mT.find(t[i]) == mT.end())) {
             mS.insert({s[i],t[i]});
               mT.insert({t[i],s[i]});
             } else if ((mS.find(s[i]) == mS.end()) || (mT.find(t[i]) == mT.end())){
             return false;
              }
              else{
                if(mS.at(s[i]) != t[i] || mT.at(t[i]) != s[i])
                  return false;
              }
        }
        return true;  
    }
};