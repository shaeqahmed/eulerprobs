#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0;
  int f1 = 1;
  int f2 = 2;
  while(f2<4000000){
    if(f2%2==0){
        x+=f2;
    }
    f2+=f1;
    f1=f2-f1;
  }
  printf("%d\n",x);
  return 0;
}