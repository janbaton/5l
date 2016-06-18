#include <ctest.h>
#include <sqr.h>

CTEST(sqrquat_suite, two_roots)
{
	//Given
	const float a = 1;
	const float b = 4;
	const float c = 3;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	const float expected_x1 = -1, expected_x2 = -3;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(FOUNT_2_ROOTS, result);
}

CTEST(sqrquat_suite, one_root)
{
	//Given
	const float a = 1;
	const float b = 2;
	const float c = 1;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	const float  expected_x1 = -1;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(sqrquat_suite, no_root)
{
	//Given
	const float a = 1;
	const float b = 2;
	const float c = 2;

	//When
	float x1, x2;
	const int result = sqrquat(a, b, c, &x1, &x2);

	//Then
	ASSERT_EQUAL(ROOTS_NOT_FOUND, result);
}
