#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
#include <cstdlib>
#include <map>
using namespace std;
class Solution {
public:
    int getMaximumGenerated(int n) {
        int curNum =0,modI = -1, max = 1;
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        map <char,char> curNums;
        curNums.insert({0,0});
        curNums.insert({1,1});
        for (size_t i = 2; i <=n; i++)
        {
            int curRes = -1;
             modI = i/2;
            if(i%2==1)
            {
             curRes =curNums.at(modI) + curNums.at(modI+1);
            curNums.insert({i,curRes});
            }
            else
            {
             curRes =curNums.at(modI);
            curNums.insert({i,curRes});
            }
            if(curRes>max)
            {
                max = curRes;
            }
        }
        return max;
    }
};
int main()
{
    Solution s;
    int curAns = s.getMaximumGenerated(4);
    return 0;
}