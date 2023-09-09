#include <stdio.h>
/**
 * main - prints the low case alphabet in reverse,
 * followed by a new line.
 * Return: ALways 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
