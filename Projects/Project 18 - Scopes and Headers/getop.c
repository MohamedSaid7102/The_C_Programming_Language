#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[]){

  int i = 0;
  char c = '\0';

  // Skipp white spaces
  while((s[0] = c = getch()) == ' ' || c == '\t');
  s[1] = '\0'; // close the char that you took


  //Now lets check if the char is +, *, /, something else
  //All of that wil be handled by the getop() caller "main()"
  if(!isdigit(c) && c != '.' && c != '-') return c;

  //Now check if its a negative sign (-) for a number, because else it will be minus sign (-)
  //To do that carfully check the char after it
  i=0;
  if(c=='-'){
    // check for the upcomming number
    if(isdigit(c=getch()) || c == '.') // so it's a negative sign
      s[++i]  = c;
    else{
      if(c!=EOF)
        ungetch(c); // push the numbre back to the buffer to read it later
      return '-';
    }
  }

  //Now if c was a digit, collect the rest of number (if any)
  if(isdigit(c))
    while(isdigit(s[++i] = c = getch())); 

  //You may stopped at the last loop on the '.' so lets take numbers after
  if(c == '.')
    while(isdigit(s[++i] = c = getch()));

  //Now close the number as a string
  s[i] = '\0';

  if(c!=EOF)
    ungetch(c);

  return NUMBER;

}