#include <stdio.h>
#define MAXLINE 1000/* Maximum input line length */
/* Its good to mention that Global variables are commonly refered to as "Exteranl" variables
   and local one are called "Automatic" variables, when you want to excess an external variable
   that was declared in another file use the word "exten" before it, if it was declared in the
   same file no need to do this.*/
void copy(char from[], char to[]);

int readline(char arr[], int limit);

int main(){

  int len, max;
  char arr[MAXLINE];
  char maxArray[MAXLINE];
  max = 0;

  while((len = readline(arr,MAXLINE)) != 0){
    if(len > max) {
      max = len;
      copy(arr, maxArray);
    }
  }

  printf("%d, %s", max,maxArray);

  return 0;
}

/* readline: read a line and store it in arr, then return the line size*/
int readline(char arr[], int limit) {
  
  int c,i;
  i= 0;

  while((c = getchar()) != EOF && i < limit -1 && c != '\n'){
      arr[i] = c;
      ++i;
  }

  if(c == '\n'){
    arr[i] = c;
    ++i;
  }

  arr[i] = '\0';

  return i;
}

/* copy: Copy 'from' into 'to'; assume 'to' is bigg enough*/
void copy(char from[], char to[]){
  size_t i;
  i = 0;
  while((to[i] = from [i]) != '\0')
    ++i;
}