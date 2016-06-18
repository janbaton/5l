#include "sqr.h"

	int sqrquat(float a, b, d, *x1, *x2);
{
	if (d>0)
	{
		*x1 = (-b + sqrt(d)) / (2 * a);
		*x2 = (-b - sqrt(d)) / (2 * a);
		return FOUND_2_ROOTS;
	}
	if (d == 0)
	{
		*x1 = -b / (2 * a);
		return FOUND_1_ROOT;
	}
	if (d < 0)
		return ROOTS_NOT_FOUND;
}
