#include <stdio.h>
/**
 * main - A function that prints all args it recieves
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
