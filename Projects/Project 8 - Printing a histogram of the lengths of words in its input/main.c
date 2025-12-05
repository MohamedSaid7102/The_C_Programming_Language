#include <stdio.h>

int main() {
    int c, i, wordLength = 0;
    int wordLengthCount[25] = {0};  // index 0 = 1-letter words, index 1 = 2-letter words, etc.
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            // Word ended
            if (wordLength > 0) {
                if (wordLength <= 25) {
                    // Store at correct index: wordLength-1
                    ++wordLengthCount[wordLength-1];
                }
                // Could add handling for words longer than 25 here
                wordLength = 0;
            }
        } else {
            ++wordLength;
        }
    }
    
    // Don't forget the last word
    if (wordLength > 0) {
        if (wordLength <= 25) {
            ++wordLengthCount[wordLength-1];
        }
    }
    
    // Print results
    for (i = 0; i < 25; ++i) {
        if (wordLengthCount[i] > 0) {
            printf("%2d-letter words: %2d\n", i+1, wordLengthCount[i]);
        }
    }
    
    return 0;
}