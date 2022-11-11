#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int getConSize(vector<int>& height,int left,int right)
    {
        int curVal = (right - left)*(min(height[left],height[right]));
        return curVal;
    }
    int maxArea(vector<int>& height) {
        int bigget = 0;
        int left = 0, right = height.size()-1;
            while(left<right)
            {
                int curContainer = getConSize(height,left,right);
                   if(curContainer>bigget)
                      bigget = curContainer;
                if(height[left] > height[right])
                    right--;
                else
                    left++;
            }
        return bigget;
    }

};