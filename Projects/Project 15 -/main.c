#include <stdio.h>

int strsearch(char[], char[]);

int strsearch2(char [], char []);


int main(){

  int positionOfTheRightMostOcc(char [], char[]);
  char txt[20] = "Moh";
  char query[10] = "Mohamed";
  int result;
  result = positionOfTheRightMostOcc(txt,query);
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

int strsearch2(char txt[], char query[]){
  int i,j,k;

  for(i =0;txt[i] != '\0';++i){
    for(j =i, k=0; query[k] != '\0' && txt[j] == query[k]; ++j, ++k);
    if(query[k] =='\0' && k >0) return i;
  }
  return -1;
}

int positionOfTheRightMostOcc(char txt[], char query[]){
  int i,j,k,lastOcc;

  lastOcc = -1;

  for(i =0;txt[i] != '\0';++i) { /* Whil you dind't get to the end of the string 'txt' */
    for(j=i,k=0;(query[k] != '\0') && (txt[j] == query[k]);++j,++k); /* Keep making the logic and check later*/

    if(k>0 && query[k] == '\0')  /* Previouslly we were returning, but now we will update lastOcc */
      lastOcc = i;
  }
  return lastOcc;
}