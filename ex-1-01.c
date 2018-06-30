
#include <stdio.h>  /* We need this so that we can call printf(). */

/* In C (unlike C++), the return type of a function is not required.  So we
 * need not write 'int main()'. If the return type be not specified, then by
 * default it is 'int', but we need not have a 'return' statement. */
int main()
{
   printf("hello, world!\n");
   return 0;
}

