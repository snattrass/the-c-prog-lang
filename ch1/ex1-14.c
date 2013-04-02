#include <stdio.h>

#define ALPHABET_SIZE 256

/* count char frequencies */
main()
{
    int alphabet[ALPHABET_SIZE];
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        alphabet[i] = 0;
    }

    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            /* skip */
        }
        else {
            alphabet[c]++;
        }
    }
    
    for (int j = 0; j < ALPHABET_SIZE; j++) {
        if (alphabet[j] > 0) {
            putchar(j);
            printf(": ");
            for (int k = 0; k < alphabet[j]; k++) {
                printf("-");
            }
            printf("\n");
        }
        
    }
}
