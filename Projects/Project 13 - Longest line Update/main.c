#include <stdio.h>
#define MAXLINE 1000/* Maximum input line length */

/* Its good to mention that Global variables are commonly refered to as "Exteranl" variables
   and local one are called "Automatic" variables, when you want to excess an external variable
   that was declared in another file use the word "exten" before it, if it was declared in the
   same file no need to do this.*/

void copy(char from[], char to[]);

int readline();

void sqeez(char [], char);

int main(){

  /*int len, max;
  char arr[MAXLINE];
  char maxArray[MAXLINE];
  max = 0;

  while((len = readline()) != 0){
    if(len > max) {
      max = len;
      copy(arr, maxArray);
    }
  }

  printf("%d, %s", max,maxArray); */

  char name[] = "mohamed said ahmed shelf mo mo mo";

  sqeez(name, 'm');

  printf("%s",name);

  return 0;
}

/* squeez: removes all c from s*/
void sqeez(char s[], char c){
  int i,j;
  for(i = j = 0; s[i] != '\0'; ++i)
    if(s[i] != c)
      s[j++] = s[i];
  s[j] = '\0'; /* Close the string to print the correct line*/
}

/* readline: read a line and store it in arr, then return the line size*/
int readline() {
  
  int c,i;
  i= 0;

  while((c = getchar()) != EOF && c != '\0' && c != '\n')
      ++i;

  if(c == '\n')
    ++i;

  return i;
}

/* copy: Copy 'from' into 'to'; assume 'to' is bigg enough*/
void copy(char from[], char to[]){
  size_t i;
  i = 0;
  while((to[i] = from [i]) != '\0')
    ++i;
}