#include <stdio.h>

#define IN 1 /* In a word */
#define OUT 0 /* Outside a word */

/* Project 5 - Counting chars, words, and new lines*/
void main(){
  int c, nc,nl,nw,state;

  state = OUT;
  nc=nl=nw = 0;
  while((c = getchar()) != EOF) {
    ++nc;
    if(c == '\n') ++nl;
    if(c == ' ' || c == '\t' || c == '\n') state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("Number of Characters: %3d \nNumber of words: %3d \nNumber of new lines: %3d \n", nc,nw,nl);

}

/* 
   Hello world this is Mohamed
   I like to progra and this is my program
*/