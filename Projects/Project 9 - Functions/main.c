#include <stdio.h>

/* Power function that will return the value of base^expo */
int pow(int base, int expo);

int main(){
  printf("%2d", pow(2,3));
  return 0;
}

/* Defenition of the pow function */
int pow(int base, int expo) {
  int result = 1;

  for(int i =0; i < expo; ++i)
    result = result * base;

  return result;
}