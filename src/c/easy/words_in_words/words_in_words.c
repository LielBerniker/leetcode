 #include <stdbool.h>
  #include <stdio.h>
  #include <stdlib.h>

bool IsWord(char mainWord[], char testWord[]){
int *arr = (int*)calloc(26,sizeof(int));
int i = 0;
while (*(mainWord+i))
{
    *(*(mainWord+i)-97 + arr)+=1;
}
i=0;
while (*(testWord+i))
{
    *(*(testWord+i)-97 + arr)-=1;
    if(*(*(testWord+i)-97 + arr)<0)
    return false;
}
return true;


   
}