#include <stdio.h>
/* 
Page 16 of Kernighan and Ritchie, 2nd edition with printf() addition

Question: Why does the printf() statement execute n+1 times, where n is the number of characters in the input?
Answer: Because there is a newline character at the end of the input by default!
*/
main()
{
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    printf("inside loop\n");
    c = getchar();
  }
}
