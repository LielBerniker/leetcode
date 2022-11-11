 #include <stdbool.h>
  #include <stdio.h>
  #include <stdlib.h>

int riseWater(int* arr,int size){
   if(size <3 )
   return 0;
   int sum =0;
   int lastBig = *arr;
   int lastPos = 0;
   int sumToReduce = 0;
   bool first = true;
   for (size_t i = 1; i < size; i++)
   {
    if((*arr+i)>=lastBig)
    {
        if(first==false)
        {
        sum+= (lastBig*(i-lastPos) - sumToReduce);
        }
         lastBig = *(arr+i);
         lastPos = i;   
         sumToReduce = 0;
    }
    else{
         sumToReduce+=*(arr+i);
         first = false;
    }
   }
   return sum;
   
   
}
