#include <stdio.h>

int strsearch(char[], char[]);

int main(){

  char txt[10] = "Mohamed";
  char query[10] = "ed";
  int result;
  result = strsearch(txt,query);
  printf("%d ", result);

  return 0;
}


int strsearch(char txt[], char query[]){

  int i,match,holdI;
  i = holdI = match = 0;

  while (txt[i] != '\0')
  {
    if(txt[i] == query[0]){
      match = 1;
      holdI = i; /* Holdd the index*/

      for(int j=0; (query[j] != '\0') && match; j++,i++){ /* && match : to avoid un-nessecary comparisons*/
        match = (txt[i] == query[j]) && match; /* Always check if it's still matching or not */
      }

      if(match) return holdI;
      i = holdI; /* restore i value before getting into the inner comparison */
    }
    i++;
  }
  return -1; /* if it didn't return any thing till now, return -1 "The query is not found "*/
}