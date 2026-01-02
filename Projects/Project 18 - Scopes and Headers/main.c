#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100

int main(){

  char token[MAXOP];
  int type;

  //Infinit Loop to keep taking inputs
  while(1){

    printf("> ");
    fflush(stdout);


    type = getop(token);

    if(type == 'q' || type == EOF) break;

    if(type == NUMBER) {
      double num = atof(token);
      push(num);
      printf("Pushed %.2f to the stack.\n",num);
    }

  }

  return 0;
}
