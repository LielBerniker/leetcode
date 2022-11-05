
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class A {
public:
   int data;
//    virtual void fun1()
//    {

//    }    
//       virtual void fun2()
//    {
    
//    } 
//       virtual void fun3()
//    {
    
//    }  
};

char* Check_Integer (char* N) {
   int i = 0;
   char * answer = new char;
   
   while(N[i] != '\0')
   {
    if(N[i] == '.')
    {
        answer = "NO";
        return answer;
    }
    i++;
   }
        answer = "YES";
        return answer;
}
int main()
{
    char s[] = "34";
    Check_Integer(s);
    return 0;
}

