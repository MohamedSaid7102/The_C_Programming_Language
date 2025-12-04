#include <stdio.h>

/* Project 7 - Counting digits white spaces and so */
void main(){
  int c, nWhite, nCharacters;
  int nDigits[10];

  nWhite = nCharacters = 0;

  // Initialize nDigits
  for(short i = 0; i<10; ++i)
    nDigits[i] = 0;

  while((c=getchar()) != EOF)
    if(c >= '0' && c <= '9')
      ++nDigits[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nWhite;
    else
      ++nCharacters;

  printf("Number of Digits: [");
  for (short i = 0; i < 10; ++i){
    if (i == 9){
      printf(" %2d  ",nDigits[i]);
      continue;
    }
    printf(" %2d - ",nDigits[i]);
  }
  
  printf("] \nNumber of Whites Spaced %2d, Number of Characters %2d.",nWhite,nCharacters);

}