#include "3-calc.h"

/**
 *main - function principal.
 *@argc: acounter arguments.
 *@argv: array arguments.
 *Return: return 0.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Valida que el operador no sea una letra*/
	if (operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

/*imprime llamando a la funcion get  con los parametros en orden*/
	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}
