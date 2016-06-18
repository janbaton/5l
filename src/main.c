#include <stdio.h>
#include <math.h>
#include "sqr.h"

int main ()
{
	float a, b, c, d, x1, x2;

	printf("input ur coefs a,b,c:  \n");
	scanf("%f %f %f", &a, &b, &c);

	d = (b * b) - (4 * a * c);
	int result = sqrquat(a, b, c, &x1, &x2);

	if (result == FOUND_2_ROOTS)
	{
		printf("two roots: x1 = %2.2f, x2 = %2.2f", x1, x2);
	}
	if (result == FOUND_1_ROOT)
	{
		printf("one root: x1 = %2.2f", x1);
	}
	if (result == ROOT_NOT_FOUND)
	{
		printf("roots not found");
	}
	return 0;
}
