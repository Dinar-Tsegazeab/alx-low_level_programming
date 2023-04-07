#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the name of the program
 * @argv:array of argumemts
 * @argc:number of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
