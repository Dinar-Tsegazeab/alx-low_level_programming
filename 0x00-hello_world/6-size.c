#include <stdio.h>
/**
 * main - A program that print the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;

printf("Size of a char; %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a int; %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a long int; %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a long long int; %lu byte(s)\n", (unsigned long)sizeof(8));
printf("Size of a float; %lu byte(s)\n", (unsigned long)sizeof(4));
return (0);
}
