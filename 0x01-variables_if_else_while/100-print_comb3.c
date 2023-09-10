#include <stdio.h>
/**
 * main - thisis the project function.
 * Return: Always 0
 */
int main(void)
{
int i, a;
for (i = 48; i <= 56; i++)
{
for (a = 49; a <= 57; a++)
{
if (a > i)
{
putchar(i);
putchar(a);
if (i != 56 || a != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
