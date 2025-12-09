#include <stdio.h>

#define MAXLETTER 25 /* Suppose the largest word in english is composed of 25 cahrs */

void histogram(int arr[]);
/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the 
histogram with the bars horizontal; a vertical orientation is more challenging. */
int main(){

    int c,i;
    int wordLengthArray[MAXLETTER];

    /* Initialize the wordLengthArray with 0s */
    for (size_t i = 0; i < MAXLETTER; ++i)
        wordLengthArray[i] = 0;

    /* This is the words length*/
    i = 0;

    while((c = getchar()) != EOF){
        ++i;
        if((c == ' ' || c == '\t' || c == '\n') && i > 0){
            /* Guared condition to not overflow in case of words > 25 letters */
            if (i > MAXLETTER) i = MAXLETTER -1;

            ++wordLengthArray[i -1];
            i = 0; /* Reset i to start counting the next word */
        }
    }

    /* Considering reaching the end of file without a space termination, we should store this extra word*/
    if(i>0)
        ++wordLengthArray[i-1];

    histogram(wordLengthArray);

        
    return 0;
}


/* histogram: prints out the histogram for number of words with a certain characters */
void histogram(int arr[]){

    /* Print the array list */
    for (size_t i = 0; i < MAXLETTER; ++i)
        if(arr[i] !=0)
            printf("#Words with %2d letters::-> %2d \n",i,arr[i]);

    printf("\n::::::::::::::::::::::::::::::::::::\n");
    printf("\n:::::: Printing with Stars :::::::::\n");
    printf("\n::::::::::::::::::::::::::::::::::::\n");


    /* Print the array list with stars*/
    for (size_t i = 0; i < MAXLETTER; ++i){
        if(arr[i] !=0){
            printf("#Words with %2d letters::-> ",i);
            for (size_t j = 0; j < arr[i]; ++j)
                printf("*") ;
        printf("\n");
        }
    }
}