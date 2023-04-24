#include <stdio.h>
/**
 * main - print out sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of  a long long int: %d bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
