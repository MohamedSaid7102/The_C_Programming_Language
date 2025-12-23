#include <stdio.h>

/* Power function that will return the value of base^expo */
int pow(int base, int expo);

int atoi(char[]);

int main(){
  printf("%2d", pow(2,3));
  return 0;
}


/* atoi: is a function that will convert a string number to anumber 
"124" => 124
"  -124"
*/
int atoi(char s[]){
  int i, sign,result;
  i = result = 0;

  // skipped the leading spaces
  while(s[i] == ' ') ++i;

  // check for a sign
  if(s[i] == '-') {
    sign = -1;
    ++i;
  } else if (s[i] == '+'){
    sign = 1;
    ++i;
  }

  // convert chacters to integers
  while(s[i] >= '0' && s[i] <= '9'){
    result = result * 10 + (s[i] - '0');
    ++i;
  }

  return result * sign;


}

// ASCII
/*
  '0': 30
  '1': 31
  '2': 32
  A: 64: 1010111
  B: 65
*/



/* Defenition of the pow function */
int pow(int base, int expo) {
  int result = 1;

  for(int i =0; i < expo; ++i)
    result = result * base;

  return result;
}