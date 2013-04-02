#include <stdio.h>

main()
{
    int result;
    while ((result = (getchar() != EOF)) != 0) {
        printf("The result of getchar() != EOF is: %d\n", result);
    }
}
