#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  int i;
  for(i=1; i<1000; i++){
    if(i%3==0 || i%5==0){
      x+=i;
    }
  }
  printf("%d\n",x);
  return 0;
    }