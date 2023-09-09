#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */int main(void)
{
int n, m, l;

for (n = 48; n < 56; n++)
{
for (m = n + 1; m < 57; m++)
{
for (l = m + 1; l < 58; l++)
{
putchar(n);
putchar(m);
putchar(l);

if (n != 55)
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
