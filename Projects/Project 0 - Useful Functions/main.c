#include <stdio.h>

void sqeez(char [], char);

void strcast(char [], char[]);

int main(){

  char name1[100] = "Mohamed";
  char name2[100] = "Said";
  strcast(name1,name2);

  printf("%s", name1);

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


/* strcast: copies array 't' to array 'h'; assumes that 't' is bigg enough */
void strcast(char h[], char t[]){
  /* First try to find the end of 'h' */
  int i,j; 
  i = j  = 0;

  while(h[i] != '\0') i++; /* Keep incremetning untill you read the end */
  while((h[i++] = t[j++]) != '\0'); /* Copy the array */
}