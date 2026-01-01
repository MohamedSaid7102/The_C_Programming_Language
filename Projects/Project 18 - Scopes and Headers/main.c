#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100

int main(){

  char c = '\0';

  printf("When you finish typing press (Enter)\n");

  while((c = getch()) != '\n'){
    if(c>='0' && c<='9') {
      printf("Digit is found, Pushing back to the buffe ... ... \n");
      ungetch(c);
      printf("Now lets view the last item buffer: %c",getch());
    }
    printf("%c",c);
  }

  return 0;
}
