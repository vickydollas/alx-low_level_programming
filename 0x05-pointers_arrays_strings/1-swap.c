#include "main.h"
/**
*swap_int - swap the value of two integer
*@a & b: input integer
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
