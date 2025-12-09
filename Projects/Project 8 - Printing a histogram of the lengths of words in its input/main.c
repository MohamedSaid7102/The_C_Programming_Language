#include <stdio.h>

/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the 
histogram with the bars horizontal; a vertical orientation is more challenging. */
int main(){
    char str[] = "Hello";
    
    printf("String: %s\n", str);
    printf("Length (including \\0): %zu\n", sizeof(str));
    
    // Print each character's ASCII value
    for (int i = 0; i < sizeof(str); i++) {
        printf("str[%d] = %d (ASCII)\n", i, str[i]);
    }

    return 0;
}