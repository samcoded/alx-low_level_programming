#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char q[] = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
write(2, q, sizeof(q));
return (1);
}
