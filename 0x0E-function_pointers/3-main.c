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
	int result;
	char foo;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	foo = *argv[2];
	if ((foo == '/' || foo == '%') && !strcmp(argv[3], "0"))
	{
		printf("Error\n");
		exit(100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	result = (ptr(x, y));
	printf("%d\n", result);
	return (0);
}
