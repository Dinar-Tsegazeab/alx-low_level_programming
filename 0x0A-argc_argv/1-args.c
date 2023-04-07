#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the name of the program
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
