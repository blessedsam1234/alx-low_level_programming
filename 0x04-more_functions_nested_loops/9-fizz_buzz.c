#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buss for multiples od 5,
 * and FizzBuss for multiples of both
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuss");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
