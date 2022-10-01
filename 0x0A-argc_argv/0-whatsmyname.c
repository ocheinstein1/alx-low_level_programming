#include <stdio.h>
/**
 * main - function that print it's name followed by a newline
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
