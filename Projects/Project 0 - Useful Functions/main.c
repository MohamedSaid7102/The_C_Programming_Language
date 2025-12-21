#include <stdio.h>

void sqeez(char [], char);

void strcast(char [], char[]);

void deepSqueez(char [], char []);

int binarySearch(int x, int[], int n);


int main(){

  int number [5]= {1,2,33,40,2};

  printf("%d",binarySearch(33,number,5));

  return 0;
}

/* BinarySearch: a function that will search for number 'x' by splitting the search range in half 
  each iteration, if the number to search is bigger we will search in right half of the range, else
  we will search in the left half, NOTE: Assumes that arr is soter
  Returns index if found and -1 if not*/

int binarySearch(int x, int arr[], int n){
  int low, mid, hight;
  low = 0;
  hight = n -1;

  while (low<=hight)
  {
    mid = (low + hight)/2;
    if(x>arr[mid]) 
      low = mid + 1;
    else if(x<arr[mid])
      hight = mid -1;
    else
      return mid;
  }
  return -1;
  
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

  int i, j, k,found;
  i = j = k = 0;
  while(arr1[i] != '\0'){
    found = 0;
    while(arr2[j] != '\0'){
      if(arr1[i] == arr2[j]){
        found = 1;
        break;
      }
      j++;
    }
    if(!found) arr1[k++] = arr1[i];
    i++;
    j = 0; /* reset j to start form the start */
  }

  arr1[k] = '\0'; /* close the text */
}