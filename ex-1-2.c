#include <stdio.h>

int main()
{
   /* No comment following an invocation of printf() means that printf()
    * returns the unescaped version of the escaped character and gives warning
    * at compiling time. (Preceding a character by the back-slash character '\'
    * in a C string is also called 'escaping the character'.)
    */
   printf("backslash-a '\a'\n"); /* control-g (alert, bell) */
   printf("backslash-b '\b'\n"); /* control-h (backspace)   */
   printf("backslash-c '\c'\n"); 
   printf("backslash-d '\d'\n");
   printf("backslash-e '\e'\n"); /* control-[ (Esc key,   *not* in K&R) */
   printf("backslash-f '\f'\n"); /* control-l (form-feed, *not* in K&R) */
   printf("backslash-g '\g'\n");
   printf("backslash-h '\h'\n");
   printf("backslash-i '\i'\n");
   printf("backslash-j '\j'\n");
   printf("backslash-k '\k'\n");
   printf("backslash-l '\l'\n");
   printf("backslash-m '\m'\n");
   printf("backslash-n '\n'\n"); /* control-j (new line) */
   printf("backslash-o '\o'\n");
   printf("backslash-p '\p'\n");
   printf("backslash-q '\q'\n");
   printf("backslash-r '\r'\n"); /* control-m (carriage return) */
   printf("backslash-s '\s'\n");
   printf("backslash-t '\t'\n"); /* control-i (Tab key) */
   /* 32-bit hexadecimal string (standing for a universal character) is
    * required after escaped 'u', at least for gcc-4.9.2, which interprets '\u'
    * specially, even with '-ansi' and '-pedantic' supplied on the command
    * line.
    *
    * K&R, however, indicates that '\u' should *not* be treated specially.
    */
   printf("backslash-u then hex 0024 '\u0024'\n"); /* universal character  */
   printf("backslash-v '\v'\n");                   /* control-k (vert tab) */
   printf("backslash-w '\w'\n");
   /* See www.asciitable.com, for example, for ASCII codes. 0x41 corresponds to
    * 'A' (capital-A).
    */
   printf("backslash-x followed by hex 41 '\x41'\n"); /* ASCII hex encoding */
   printf("backslash-y '\y'\n");
   printf("backslash-z '\z'\n");
   printf("backslash-A '\A'\n");
   printf("backslash-B '\B'\n");
   printf("backslash-C '\C'\n");
   printf("backslash-D '\D'\n");
   printf("backslash-E '\E'\n"); /* control-[ (Esc key, *not* in K&R) */
   printf("backslash-F '\F'\n");
   printf("backslash-G '\G'\n");
   printf("backslash-H '\H'\n");
   printf("backslash-I '\I'\n");
   printf("backslash-J '\J'\n");
   printf("backslash-K '\K'\n");
   printf("backslash-L '\L'\n");
   printf("backslash-M '\M'\n");
   printf("backslash-N '\N'\n");
   printf("backslash-O '\O'\n");
   printf("backslash-P '\P'\n");
   printf("backslash-Q '\Q'\n");
   printf("backslash-R '\R'\n");
   printf("backslash-S '\S'\n");
   printf("backslash-T '\T'\n");
   /* 64-bit hexadecimal string (standing for a universal character) is
    * required after escaped 'U', at least for gcc-4.9.2, which interprets '\U'
    * specially, even with '-ansi' and '-pedantic' supplied on the command
    * line.
    *
    * K&R, however, indicates that '\U' should *not* be treated specially.
    */
   printf("backslash-U then hex 0010FFFF '\U0010FFFF'\n"); /* universal char */
   printf("backslash-V '\V'\n");
   printf("backslash-W '\W'\n");
   printf("backslash-X '\X'\n");
   printf("backslash-Y '\Y'\n");
   printf("backslash-Z '\Z'\n");
   printf("backslash-1 '\1'\n"); /* control-a (             *not* in K&R) */
   printf("backslash-2 '\2'\n"); /* control-b (             *not* in K&R) */
   printf("backslash-3 '\3'\n"); /* control-c (             *not* in K&R) */
   printf("backslash-4 '\4'\n"); /* control-d (             *not* in K&R) */
   printf("backslash-5 '\5'\n"); /* control-e (             *not* in K&R) */
   printf("backslash-6 '\6'\n"); /* control-f (             *not* in K&R) */
   printf("backslash-7 '\7'\n"); /* control-g (alert, bell, *not* in K&R) */
   printf("backslash-8 '\8'\n");
   printf("backslash-9 '\9'\n");
   printf("backslash-0 '\0'\n"); /* null character (terminates string) */
   printf("backslash-! '\!'\n");
   printf("backslash-@ '\@'\n");
   printf("backslash-# '\#'\n");
   printf("backslash-$ '\$'\n");
   printf("backslash-percent '\%'\n"); /* literal '%' */
   printf("backslash-^ '\^'\n");
   printf("backslash-& '\&'\n");
   printf("backslash-* '\*'\n");
   printf("backslash-( '\('\n");
   printf("backslash-) '\)'\n");
   printf("backslash-- '\-'\n");
   printf("backslash-_ '\_'\n");
   printf("backslash-= '\='\n");
   printf("backslash-+ '\+'\n");
   printf("backslash-` '\`'\n");
   printf("backslash-~ '\~'\n");
   printf("backslash-[ '\['\n");
   printf("backslash-] '\]'\n");
   printf("backslash-{ '\{'\n");
   printf("backslash-} '\}'\n");
   printf("backslash-; '\;'\n");
   printf("backslash-: '\:'\n");
   printf("backslash-' '\''\n");
   printf("backslash-double-quote '\"'\n");
   printf("backslash-, '\,'\n");
   printf("backslash-. '\.'\n");
   printf("backslash-< '\<'\n");
   printf("backslash-> '\>'\n");
   printf("backslash-/ '\/'\n");
   printf("backslash-? '\?'\n");
   printf("backslash-| '\|'\n");
   printf("backslash-space '\ '\n");
   printf("backslash-backslash '\\'\n"); /* literal '\' */
   return 0;
}

