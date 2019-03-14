#include "3-calc.h"
/**
 * main - main function for operators
 * @argc: arg count
 * @argv: arguments
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int x;
	int y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && y == '0')
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(x, y));
	return (0);
}
