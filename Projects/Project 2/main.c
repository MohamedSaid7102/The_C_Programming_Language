#include <stdio.h>


// Program to count number of tabs and spaces
void main() {
  char c, numberOfSpaced;
  while((c=getchar()) != '\n') {
    if(c == ' ') numberOfSpaced++;
    printf("%c",c);
  }
  printf("\nNumber of tabs in the program is : %d \n", numberOfSpaced);
}