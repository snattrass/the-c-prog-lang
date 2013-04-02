#include <stdio.h>

main()
{
    int result = (getchar() != EOF);
    if (result == 0 || result == 1) {
        printf("result is 0 or 1 as expected\n");
    }
    else {
        printf("result is neither 0 or 1.  Oh dear....\n");
    }
}
