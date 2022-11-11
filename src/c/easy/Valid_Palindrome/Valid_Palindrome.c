 #include <stdbool.h>
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
bool isPalindrome(char * s){
    char curC = *s;
    int size = 0;
    int i = 0;
 while(curC!='\0')
 {
    if(((48 <= curC) && (curC <=57))  || ((65 <= curC) && (curC <=90)) || ((97 <= curC) && (curC <=122)))
    {
        size++;
    }
    i++;
    curC = *(s+i);
 }
 char* side = (char*)malloc(size*sizeof(char));
 char* upside = (char*)malloc(size*sizeof(char));
 
 i=0;
 int sideLocation = 0;
 int upsideLocation = size-1;
 curC = *s;
  while(curC!='\0')
 {
    if(((48 <= curC) && (curC <=57))  || ((65 <= curC) && (curC <=90)) || ((97 <= curC) && (curC <=122)))
    {
        int add = 0;
        if((65 <= curC) && (curC <=90))
        add = 32;
       side[sideLocation] =(curC + (char)add);
       upside[upsideLocation] = (curC + (char)add);
       sideLocation++;
       upsideLocation--;
    }
    printf("%s\n", side);
    printf("%s\n", upside);
    i++;
    curC = *(s+i);
 }
 int answer = strcmp(side,upside);
 free(side);
 free(upside);
 return (answer==0)?true:false;
}
int main(int argc, char *argv[]) {
   char * cur1 = "A man, a plan, a canal: Panama";
   int x = isPalindrome(cur1);
   printf(x ? "true" : "false");
}