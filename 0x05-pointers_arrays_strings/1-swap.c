#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *@a: int to swap
 *@b: int to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;
	 m = *a;
	 *a = *b;
	 *b = m;
}
