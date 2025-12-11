#include <stdio.h>

#define VTAB '\007' 
enum months {JAN=1, FAB, MARS, APRIL, MAY, JUN, JULY, AUG, SEP, OCT, NOV, DEC};

int strlen(char arr[]);

[]int atoi(char arr[]);

int main(){

  char name[] = "Mohamed";
  int numeric[sizeof(name)];

  return 0;
}


/* atoi: converts String to a list of numbers*/
[]int atoi(char arr[]){
  int i, c;
  int numeric[sizeof(arr)];

  for (i = 0; (c=arr[i]); i++)
    numeric[i] = c;
  
  return numeric;
}

/* strlen: returns length of a string*/
int strlen(char arr[]){
  int i;
  i=0;
  while(arr[i] != '\0')
    ++i;
  return i;
}