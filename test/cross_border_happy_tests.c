#include <stdio.h>
#include <string.h>

#include "cross_border_happy_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: cross_border_happy_test_001
 * Description:  Create a 4 * 4 matrix and get the value of (1, 1),
 *             Getting the value shall be successful.
 */
static int cross_border_happy_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 1, 1);
    if (cross_border_value != cross_border_value)
    {
        printf("[ERROR] cross border value of (1, 1) is NAN\n");
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
 * Description:  Create a 4 * 4 matrix and get the value of (1, 4),
 *             Getting the value shall be successful.
 */
static int cross_border_happy_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 1, 4);
    if (cross_border_value != cross_border_value)
    {
        printf("[ERROR] cross border value of (1, 4) is NAN\n");
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
 * Description:  Create a 4 * 4 matrix and get the value of (4, 1),
 *             Getting the value shall be successful.
 */
static int cross_border_happy_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 4, 1);
    if (cross_border_value != cross_border_value)
    {
        printf("[ERROR] cross border value of (4, 1) is NAN\n");
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
 * Description:  Create a 4 * 4 matrix and get the value of (4, 4),
 *             Getting the value shall be successful.
 */
static int cross_border_happy_test_004(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 4, 4);
    if (cross_border_value != cross_border_value)
    {
        printf("[ERROR] cross border value of (4, 4) is NAN\n");
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
 * Description:  Create a 4 * 4 matrix and get the value of (2, 3),
 *             Getting the value shall be successful.
 */
static int cross_border_happy_test_005(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float cross_border_value = ts_matrix->get_matrix_value(ts_matrix, 2, 3);
    if (cross_border_value != cross_border_value)
    {
        printf("[ERROR] cross border value of (2, 3) is NAN\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_cross_border_happy_tests()
{
    run_unit_test(cross_border_happy_test_001);
    run_unit_test(cross_border_happy_test_002);
    run_unit_test(cross_border_happy_test_003);
    run_unit_test(cross_border_happy_test_004);
    run_unit_test(cross_border_happy_test_005);
}
