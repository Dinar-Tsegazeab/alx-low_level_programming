#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all argumemts it receives
 * @argv:array of argumemts
 * @argc:number of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])

{
	int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
