#include <stdio.h>

/* This program can be exbanded to check the CAPITAL letters and special characters with the same technique */

#define ALPHABIT_LETTERS 26 /* Number of letters in English Alpha bit*/

void histogram(int arr[]);

/* Project 11 - Printing a histogram of the freq of chars in its input */
int main(){

  int lettersFreq [ALPHABIT_LETTERS] = {0};
  int c;


  while((c = getchar()) != EOF)
        if(c != ' ' || c != '\t' || c != '\n')
          ++lettersFreq[c-'a'];

  histogram(lettersFreq); 

  return 0;
}

/* histogram: prints out the histogram for number of words with a certain characters */
void histogram(int arr[]){

    /* Print the array list */
    for (size_t i = 0; i < ALPHABIT_LETTERS; ++i)
        if(arr[i] !=0)
            printf("#The freq of %c letters::-> %2d \n",(i + 97),arr[i]);

    printf("\n::::::::::::::::::::::::::::::::::::\n");
    printf("\n:::::: Printing with Stars :::::::::\n");
    printf("\n::::::::::::::::::::::::::::::::::::\n");

    /* Print the array list with stars*/
    for (size_t i = 0; i < ALPHABIT_LETTERS; ++i){
        if(arr[i] !=0){
            printf("#The freq of %c letters::-> ",(i+97));
             for (size_t j = 0; j < arr[i]; ++j)
                 printf("*") ;
         printf("\n");
         }
     }
 }