#include <stdio.h>

#define greet printf("Hello world \n")

#define max(A,B) ((A) > (B)? (A) : (B))

void countdown(int);

int factorial(int );

void mystery(int);

void printd(int );

int main(){

  greet;
  printf("%c ", max('a','b'));

  return 0;
}

/// @brief return the factorial of number 'n'
/// @param n 
/// @return interger result 
int factorial(int n){
  if(n <= 1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

/// @brief Recursivelly count numbers down
/// @param n 
void countdown(int n){
  if(n<0){
    printf("End of the timer");
  } else {
    printf("%d \n",n);
    countdown(--n);
  }
}


/// @brief return pattern from right to left e.g: mystery(3) => 3 2 1 1 2 3
/// @param n 
void mystery(int n) {
    if (n == 0) return;
    printf("%d ", n);
    mystery(n - 1);
    printf("%d ", n);
}

/*
printd(123) => printd(12) + 123 % 10 + '0'
               printd(12) => printd(1) + 12 % 10 + '0'
                             printd(1) =>  1 % 10 + '0'

then:

printd(123) => '1' + '2' + '3'
               printd(12) => '1' + '2'
                             printd(1) => '1' 
*/
/// @brief print a decimal as a string, putchar prints a single char, now we need to use it to print a whole number
/// @param n 
void printd(int n) {

  if(n<0) {
    putchar('-');
    n = -n;
  }

  if(n /10 ){
    printd(n /10);
  }
  putchar(n%10 + '0'); // n%10 will truncate the last number
}