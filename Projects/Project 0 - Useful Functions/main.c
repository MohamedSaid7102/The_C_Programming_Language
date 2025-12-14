#include <stdio.h>

void sqeez(char [], char);

void strcast(char [], char[]);

void deepSqueez(char [], char []);

int main(){

  char name1[100] = "Mohamed";
  char name2[100] = "moMd";
  deepSqueez(name1,name2);

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

/* deepSqueez:  deletes each character in s1 that matches any character in the string s2. */
void deepSqueez(char arr1[], char arr2[]){

  int i, j, k;
  i = j = k = 0;
  while(arr1[i] != '\0'){
    while(arr2[j] != '\0'){
      if(arr1[i] == arr2[j])
        // arr1[k++] = arr1[i+1];
        arr1[i] = '\\'; /* Delimeter */
        /* arr1           : m, o , h, m, d*/
        /* arr1 Pointer   : *         */
        /* arr2           : m, o, m*/
        /* arr2 Pointer   :    *      */
        /* newArray       : o, o , h, m, d*/
      j++;
    }
    i++;
    j = 0; /* reset j to start form the start */
  }

  i = k =0;
  while (arr1[i] != '\0')
    if(arr1[i++] != '\\')  
      arr1[k++] = arr1[i-1];
  
  arr1[k] = '\0'; /* close the text */
}