#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
       string *sumBin = new string;
       *sumBin ="";
       string smallStr="",bigStr="";
       int i=0,j=0;
       bool addOne = false;
       if(a.length()>b.length())
       {
        smallStr = b;
        bigStr = a;
       }
       else{
        bigStr = b;
        smallStr = a;
       }
       i = bigStr.length()-1;
       j = smallStr.length()-1;
       for ( ; j >= 0; j--,i--)
       {
        if(addOne == false)
        {
             if(smallStr[j]=='0' && bigStr[i] == '0' )
                {*sumBin = '0' + *sumBin;
                }
             else if (smallStr[j]=='1' && bigStr[i] == '1')
               {*sumBin = '0' + *sumBin;
                   addOne = true;
               }
            else{
               *sumBin = '1' + *sumBin;
                }
        }
        else{
            if(smallStr[j]=='0' && bigStr[i] == '0' )
                {*sumBin = '1' + *sumBin;
                 addOne = false;
                }
             else if (smallStr[j]=='1' && bigStr[i] == '1')
               {*sumBin = '1' + *sumBin;
               }
            else{
               *sumBin = '0' + *sumBin;
                }
        }
       }

         for ( ; i >= 0; i--)
       {
        if(addOne == false)
        {
             if(bigStr[i] == '0' )
               *sumBin = '0' + *sumBin;
            else
               *sumBin = '1' + *sumBin;
                
        }
        else{
            if(bigStr[i] == '0' )
                {*sumBin = '1' + *sumBin;
                 addOne = false;
                }
            else{
               *sumBin = '0' + *sumBin;
                }
        }
       }
      if(addOne)
      {
        *sumBin = '1' + *sumBin;
      }
      return *sumBin;
    }
};