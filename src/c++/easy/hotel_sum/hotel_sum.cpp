#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int hotel_prices() {
    int n,sum=0;
       cin >> n;
       for (size_t i = 0; i < n; i++)
       {
        string rooType;
        int roomsNum;
        int bathNum;
        cin >> rooType;
        cin >> roomsNum;
        cin >> bathNum;
        if(rooType == "standard" )
           sum+= (50*roomsNum + bathNum*100);
        else
           sum+= (50*roomsNum + bathNum*100 + 100);
       }
        return sum;
    }
   
};
int main()
{
    Solution s;
    int num =  s.hotel_prices();
}