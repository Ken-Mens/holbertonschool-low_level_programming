#include "3-calc.h"
/**
* get_op_func - Get the operators function
* @s: character pointer to string
* Return: function pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
			i++;
	}
	return (NULL);
}