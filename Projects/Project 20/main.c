#include <stdio.h>


void swap(int *a, int *b);

int main(){

  int a = 5, b = 10;
  swap(&a,&b);
  printf("a: %2d b: %2d", a,b);
  
  return 0;
} 

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}