#include <stdio.h>

/* Project 6 - Print each word in a line */
int main() {
  int c;  // Change char to int

  while ((c = getchar()) != EOF) 
      if (c == ' ' || c == '\n' || c == '\t') printf("\n");
      else putchar(c);

}