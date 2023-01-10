#include <stdio.h>
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int largestNum(int  i[], int z){
  int x;
  int largNum =0;
  for(x = 0; x <z; x++){
      if(largNum> i[x]){
          //do nothing
      }else{
          //change the largNum value
        largNum = i[x];
      }
  }
  //return the largNum to what called it
  return largNum;
}