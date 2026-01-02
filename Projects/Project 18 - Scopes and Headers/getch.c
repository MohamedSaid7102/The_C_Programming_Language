#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define BUFSIZE 100

int buf[BUFSIZE];
int bufp = 0; /* Keep track of how many items in the buffer, and what is the top one */

int getch(void){
  return bufp > 0 ? buf[--bufp] : getchar();
}

void ungetch(int c){
  if(bufp>=BUFSIZ) 
    printf("Error: Buffer is full\n");
  else
    buf[bufp++] = c;
}