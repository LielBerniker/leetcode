
#include <iostream>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string romanNum = "";
        int currNum = num;
        currNum = editRomanFull(romanNum,currNum,"M",1000);
        currNum = editRomanHalf(romanNum,currNum,"M","D","C",900);
        currNum = editRomanHalf(romanNum,currNum,"C","L","X",90);
        currNum = editRomanHalf(romanNum,currNum,"X","V","I",9);
        return romanNum;
    }
    int editRomanFull(string &romanNum,int num,const string& symbol,int currSize) {
         int leftOf = num/currSize;
        for (size_t i = 0; i < leftOf; i++)
        {
           romanNum = romanNum + symbol;
        }
        return num%1000;
    }
        int editRomanHalf(string &romanNum,int num,const string& symbol1,const string& symbol2,const string& symbol3,int currSize) {
         if(num>=currSize)
        {
            romanNum = romanNum + symbol3 + symbol1;
            num = num -currSize;
        }
        else if(num>=((currSize/9)*4) && num<((currSize/9)*5)){
            romanNum = romanNum + symbol3 + symbol2;
            num = num -((currSize/9)*4);
        }
        else {
            if(num>=((currSize/9)*5)){
             romanNum = romanNum  + symbol2;
             num = num-((currSize/9)*5);
              }
              int leftOf = num/(currSize/9);
              for (size_t i = 0; i < leftOf; i++)
               {
                 romanNum = romanNum + symbol3;
               }
               num = num%(currSize/9);
        }
        return num;
    }
};