#include <stdio.h>

/* count blanks, tabs and new lines */
main()
{
    int c;
    int blanks = 0;
    int newLines = 0;
    int tabs = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            blanks++;
        }
        else if (c == '\t') {
            tabs++;
        }
        else if (c == '\n') {
            newLines++;
        }
    }

    printf("Blanks: %d, tabs: %d and new lines: %d\n", blanks, tabs, newLines);
}
