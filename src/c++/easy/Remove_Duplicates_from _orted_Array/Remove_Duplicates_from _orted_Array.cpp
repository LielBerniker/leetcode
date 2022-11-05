#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastOne;
        int noDup = 0;
        if(nums.size() == 0)
        return lastOne;
        lastOne = nums[0];
        noDup++;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i]!=lastOne)
            {
                nums[noDup] = nums[i];
                noDup++;
                lastOne = nums[i];
            }
        }
        return noDup;
    }
};