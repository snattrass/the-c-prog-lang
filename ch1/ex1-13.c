#include <stdio.h>

main()
{
    int wordLengths[100];
    for (int i = 0; i < 100; i++) {
        wordLengths[i] = 0;
    }

    int length = 0;
    int index = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n') {
            wordLengths[index++] = length;
            length = 0;
        }
        else {
            length++;
        }
    }
    
    for (int j = 0; j < 100; j++) {
        if (wordLengths[j] > 0) {
            for (int k = 0; k < wordLengths[j]; k++) {
                printf("-");
            }
            printf("\n");
        }
        
    }
}
