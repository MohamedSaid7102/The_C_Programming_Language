#include <stdio.h>

#define VTAB '\007' 
enum months {JAN=1, FAB, MARS, APRIL, MAY, JUN, JULY, AUG, SEP, OCT, NOV, DEC};

int strlen(char arr[]);

int atoi(char arr[]);

unsigned long int nextRandomNumber = 1; /* Based on it will generate a new random number */ 


int randi();

void srand(unsigned int seed);

int main(){

  // printf("%d ",atoi("-12487340"));
  srand(3);
  printf("%d", randi());

  return 0;
}


/* atoi: converts String to a list of numbers*/
int atoi(char arr[]){
  /*
    to convert "123" to 123 
    1. split each number in the array with a for loop 
    2. convert each letter to a number by subtracting it from '0' ASCII
    3. 123:
      3.1. is 1000 + 20 + 3
      3.2. which is 1 * 10 = 10
                    (10 + 2) * 10 = 120
                    (120 + 3) * 1 = 123
           I need to multiply each number by 10 in each iteration, and add the 
           next number to it (Except the last numbe
      4. Now we need to check for negative numbers
  */
  int i,n, negativeNumber;
  n = 0;
  for(i =0;arr[i] != '\0'; ++i){
    if(i == 0 && arr[i] == '-') {
      negativeNumber = 1;
      continue;
    }
    n = n*10 + (arr[i] - '0');
  }
  if (negativeNumber) return (n/10) * -1;
  return n/10; /* n/10, to revert mulitplying by 10 for the last number in the previous 'for loop' */

}

/* strlen: returns length of a string*/
int strlen(char arr[]){
  int i;
  i=0;
  while(arr[i] != '\0')
    ++i;
  return i;
}