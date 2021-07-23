#include "3-calc.h"

/**
 *get_op_func - contain the function that selects the correct function.
 *@s: pointer char
 *Return: function get.
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

	/*recorrer para comparar el operador con el ops.*/
	while  (i < 5)
	{
		if (*(ops[i].op) == *s)
		{
			/*retorna a ops en posicion y haga lo que pide f que es op_add,sub...*/
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n"); /*como no cumple la condicion el while*/
	exit(99);

	return (0);
}
