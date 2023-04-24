#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: 0
*/
int main(void)
{       
        int a;
        long int b;
        long long int c;
        char d;
        float f;
        
        printf("Size of d char: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of b long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of c long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of f float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
