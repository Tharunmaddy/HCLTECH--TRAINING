#include<stdio.h>
int main()
{
    puts("First c Program");
    fputs("First c Program",stdout);
    putchar('\n');
    putchar('a');
    putchar('b');
    putchar('c');
    putchar('\n');
    fprintf(stdout,"First c Program");
    return 0;
}