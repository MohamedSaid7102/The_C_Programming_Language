#include <stdio.h>
/*Write a program to copy its input to its output, 
  replacing each tab by \t, 
  each backspace by \b, 
  and each backslash by \\. 
This makes tabs and backspaces visible in an unambiguous way.*/
void main(){
  char c;
  while((c = getchar()) != '\n'){
    if (c=='\\') printf("\\\\");
    else if (c=='\t') printf("\\t");
    else if (c=='\b') printf("\\b");
    else printf("%c",c);
  }
}