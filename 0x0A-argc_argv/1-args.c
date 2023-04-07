#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the number of arguments passed to the program
 * @argv:array of argumemts
 * @argc:number of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
