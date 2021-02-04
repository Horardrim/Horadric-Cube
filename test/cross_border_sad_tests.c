#include <stdio.h>
#include <string.h>

#include "cross_border_sad_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: cross_border_sad_test_001
 * Description:  Create a 4 * 4 matrix and get the value of (5, 2),
 *             Getting the value shall be failed.
 */
static int cross_border_sad_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 5, 2);
    if (cross_border_value == cross_border_value)
    {
        printf("[ERROR] cross border value of (5, 2) is not NAN: %f\n", cross_border_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: cross_border_sad_test_002
 * Description:  Create a 4 * 4 matrix and get the value of (7, 6),
 *             Getting the value shall be failed.
 */
static int cross_border_sad_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 7, 6);
    if (cross_border_value == cross_border_value)
    {
        printf("[ERROR] cross border value of (7, 6) is not NAN: %f\n", cross_border_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: cross_border_sad_test_003
 * Description:  Create a 4 * 4 matrix and get the value of (0, 0),
 *             Getting the value shall be failed.
 */
static int cross_border_sad_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 0, 0);
    if (cross_border_value == cross_border_value)
    {
        printf("[ERROR] cross border value of (0, 0) is not NAN: %f\n", cross_border_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: cross_border_sad_test_004
 * Description:  Create a 4 * 4 matrix and get the value of (0, 3),
 *             Getting the value shall be failed.
 */
static int cross_border_sad_test_004(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 0, 3);
    if (cross_border_value == cross_border_value)
    {
        printf("[ERROR] cross border value of (0, 3) is not NAN: %f\n", cross_border_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: cross_border_sad_test_005
 * Description:  Create a 4 * 4 matrix and get the value of (3, 0),
 *             Getting the value shall be successful.
 */
static int cross_border_sad_test_005(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 3, 0);
    if (cross_border_value == cross_border_value)
    {
        printf("[ERROR] cross border value of (3, 0) is not NAN: %f\n", cross_border_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_cross_border_sad_tests()
{
    run_unit_test(cross_border_sad_test_001);
    run_unit_test(cross_border_sad_test_002);
    run_unit_test(cross_border_sad_test_003);
    run_unit_test(cross_border_sad_test_004);
    run_unit_test(cross_border_sad_test_005);
}
