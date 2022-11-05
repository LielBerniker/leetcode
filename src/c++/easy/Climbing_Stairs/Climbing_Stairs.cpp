class Solution {
public:
    int climbStairs(int n) {
        int prev1 =1 , prev2 = 2,curNum;
        if(n==0)
        return 0;
        if(n==1)
        return prev1;
        if(n==2)
        return prev2;
        for (size_t i = 3; i <=n; i++)
        {
            curNum = prev1 + prev2;
            prev1 = prev2;
            prev2 = curNum;
        }
        return prev2;
    }
};