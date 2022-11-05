class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int location=0;
        if(nums.size() == 0)
        return location;
       for (size_t i = 0; i < nums.size(); i++)
       {
        if(nums[i] != val)
        {
           nums[location] = nums[i];
           location++;
        }
       }
       return location; 
    }
};