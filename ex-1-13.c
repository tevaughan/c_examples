
#include <stdio.h>

#define MAX_WORD_LEN 32 /* No more than 32 characters per word. */

/* hist contains the number of words for each word-length.
 *
 * The element at offset i from the beginning of the array corresponds to words
 * with i+1 characters.
 *
 * Because the array is defined outside of the scope of a function, it is
 * guaranteed by the C standard to be initialized so that every element is zero
 * before the program runs. */
int hist[MAX_WORD_LEN];

int main()
{
   /* Print histogram of word-lengths on standard input.  I am defining a word
    * to be an sequence of one or more characters that is neither a space nor
    * a tab nor a new-line. */

   int i, j;    /* loop indices for printing */
   int len = 0; /* length of current word or zero, meaning no current word */
   int c;       /* current character on standard input */
   while ((c = getchar()) != EOF) {
      if ((c == ' ' || c == '\t' || c == '\n')) {
         /* Current character is not part of a word. */
         if (len > 0) {
            /* There is a current word. Register it in histogram, and then
             * change to no-current-word state. */
            ++hist[len - 1];
            len = 0;
         }
      } else {
         /* Current character is part of a word. */
         ++len;
         if (len >= MAX_WORD_LEN) {
            len = MAX_WORD_LEN - 1;
         }
      }
   }
   /* Print histogram. */
   printf("\n");
   for (i = 0; i < MAX_WORD_LEN; ++i) {
      for (j = 0; j < hist[i]; ++j) {
         printf("#");
      }
      printf("\n");
   }

   return 0;
}

/* vim: set sw=3 tw=79: */

