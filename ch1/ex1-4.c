#include <stdio.h>

/* print Fahrenheit-Celsius table */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temp table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  printf(" oC\toF\n");
  printf("----------\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%6.1f %3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }
}
