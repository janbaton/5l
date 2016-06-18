#include <ctest.h>
#include <sqr.h>

CTEST(sqrquat_suite, two_roots)
{
	//Given
	const float a = 1;
	const float b = -13;
	const float c = 25;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	const float expected_x1 = 9, expected_x2 = 4;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(FOUND_2_ROOTS, result);
}

CTEST(sqrquat_suite, one_root)
{
	//Given
	const float a = 5;
	const float b = -20;
	const float c = 0;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	const float  expected_x1 = 2;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(sqrquat_suite, no_root)
{
	//Given
	const float a = 3;
	const float b = -12;
	const float c = -15;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}
