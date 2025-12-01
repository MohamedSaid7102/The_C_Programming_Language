#include <stdio.h>

// Program that will replace a string with multiple spaced between each string 
// with only one

//E.X:  Mohamed  Said     Shelf  ==> Mohamed Said Shelf
void main() {
  char c, previousC = ' ';

  while((c = getchar()) != '\n'){
    if(c == ' ' && previousC ==' ') continue;
    else printf("%c",c);
    previousC = c;
  }
}
