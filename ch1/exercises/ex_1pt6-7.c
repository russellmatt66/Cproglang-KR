#include <stdio.h>

/* 
Verifying that "getchar() != EOF" evaluates to 0 or 1
Printing the value of EOF
 */

main()
{
  int c,d;
  /* Exercise 1-6 */
  c = getchar() != EOF;
  printf("%d\n", c);

  /* Exercise 1-7 */
  d = EOF;
  printf("The value of the EOF character is %d\n", d);
}
