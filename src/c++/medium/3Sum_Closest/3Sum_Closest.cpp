
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 
#include <cstdlib>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        const int MAX_INT = 2147483647;
        int close = MAX_INT;
        int closeSum = 0;
        int begin = 0,mid = 1,end= nums.size()-1;
        if(nums.size()==0)
        {
            return NULL;
        }
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums.size()==2)
        {
            return nums[0] + nums[1];
        }
        sort(nums.begin(),nums.end());
        while (begin<mid && mid<end)
        {
           int sum = nums[begin] + nums[mid] + nums[end];
           if(abs(target-sum) <= close)
           {
            close = abs(target-sum);
            closeSum = sum;
            if(abs(target-sum) == 0)
            return sum;
           }
           if(sum > target)
           {
            end--;
           }
           else{
              if(mid+1<end && end+1<mid)
              {
                int sumPlusMid = nums[end] + nums[mid+1] + nums[begin];
                int sumPlusMidBegin= nums[end] + nums[mid+1] + nums[begin+1];
                int sumPlusBegin = nums[end] + nums[mid] + nums[begin+1];
                if(abs(sumPlusMid-target) < abs(sumPlusMidBegin-target))
                  {
                    if(abs(sumPlusMid-target) < abs(sumPlusBegin-target))
                        mid++;
                    else
                        begin++;
                  }
                  else{
                    if(abs(sumPlusMidBegin-target) < abs(sumPlusBegin-target) )
                    {
                        mid++;
                        begin++;
                    }
                    else
                        begin++;
                  }
              }
              else if(mid+1<end){
                int sumPlusMid = nums[end] + nums[mid+1] + nums[begin];
                int sumPlusMidBegin= nums[end] + nums[mid+1] + nums[begin+1];
                if(abs(sumPlusMid-target) < abs(sumPlusMidBegin-target))
                    mid++;
                  else{
                    mid++;
                    begin++;
                  }
              }
              else
              begin++;
           }

        }
       
        return closeSum;
    }
};