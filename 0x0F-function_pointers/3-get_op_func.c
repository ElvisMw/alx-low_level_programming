#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Chooses right  function for operation
 * @s: Represents the operator chosen
 * Return: Pointer function related to operator
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

	int e_l = 0;

	while (ops[e_l].op != NULL)
	{

		if (*(ops[e_l].op) == *s && s[1] == '\0')
			return (ops[e_l].f);

		e_l++;
	}

	return (NULL);
}
