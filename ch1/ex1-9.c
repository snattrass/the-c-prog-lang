#include <stdio.h>

/* squash blanks */
main()
{
    int c;
    int lastChar = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && lastChar == ' ') {
            /* skip */
        }
        else {
            putchar(c);
            lastChar = c;
        }
    }
}
