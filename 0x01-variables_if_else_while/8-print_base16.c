#include <stdio.h>
/**
 * main - Enty point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (num = 'a'; num <= 'f'; num++)
{
putchar(num);
}
putchar('\n');

return (0);
}

