#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    std::vector<int> plusOne(vector<int>& digits) {
        for (int i = (digits.size()-1); i >= 0; i--)
        {
            if((digits[i]+1)!= 10)
            {
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
            }
        }
        if(digits[0]==0)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
int main()
{
    Solution s;
    std::vector<int> digits;
    digits.push_back(9);
    s.plusOne(digits);
}