int _putchar(char c);

/**
 * _putchar - writes the character c to stdout
 */

char *_memset(char *s, char b, unsigned int n);
/**
 * _memset - function that fills memory with a constant byte.
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * function that copies memory area.
 */

char *_strchr(char *s, char c);
/**
 * _strchr - function that locates a character in a string.
 */

unsigned int _strspn(char *s, char *accept);
/**
 * _strspn - function that gets the length of a prefix substring.
 */

char *_strpbrk(char *s, char *accept);
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 */

char *_strstr(char *haystack, char *needle);
/**
 * _strstr - function that locates a substring.
 */

void print_chessboard(char (*a)[8]);
/**
 * print_chessboard - function that prints the chessboard.
 */

void print_diagsums(int *a, int size);
/**
 * print_diagsums -  function that prints the sum of the two diagonals of a square matrix of integers.
 */

