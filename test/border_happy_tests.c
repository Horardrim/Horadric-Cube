#include <stdio.h>
#include <string.h>

#include "border_happy_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: cross_border_happy_test_001
 * Description:  Create a 4 * 4 matrix and check if (4, 4) is on border,
 *             The result shall be true.
 */
static int border_happy_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 4, 4))
    {
        printf("[ERROR] (4, 4) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_002
 * Description:  Create a 4 * 4 matrix and check if (1, 1) is on border,
 *             The result shall be true.
 */
static int border_happy_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 1, 1))
    {
        printf("[ERROR] (1, 1) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_003
 * Description:  Create a 4 * 4 matrix and check if (1, 4) is on border,
 *             The result shall be true.
 */
static int border_happy_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 1, 4))
    {
        printf("[ERROR] (1, 4) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_004
 * Description:  Create a 4 * 4 matrix and check if (4, 1) is on border,
 *             The result shall be true.
 */
static int border_happy_test_004(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 4, 1))
    {
        printf("[ERROR] (4, 1) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_005
 * Description:  Create a 4 * 4 matrix and check if (3, 1) is on border,
 *             The result shall be true.
 */
static int border_happy_test_005(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 3, 1))
    {
        printf("[ERROR] (3, 1) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_006
 * Description:  Create a 4 * 4 matrix and check if (1, 3) is on border,
 *             The result shall be true.
 */
static int border_happy_test_006(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 1, 3))
    {
        printf("[ERROR] (1, 3) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_007
 * Description:  Create a 4 * 4 matrix and check if (4, 3) is on border,
 *             The result shall be true.
 */
static int border_happy_test_007(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 4, 3))
    {
        printf("[ERROR] (4, 3) shall have been at boader.\n");
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
 * Test name: cross_border_happy_test_008
 * Description:  Create a 4 * 4 matrix and check if (3, 4) is on border,
 *             The result shall be true.
 */
static int border_happy_test_008(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(!ts_matrix->is_at_matrix_boader(ts_matrix, 3, 4))
    {
        printf("[ERROR] (3, 4) shall have been at boader.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_border_happy_tests()
{
    run_unit_test(border_happy_test_001);
    run_unit_test(border_happy_test_002);
    run_unit_test(border_happy_test_003);
    run_unit_test(border_happy_test_004);
    run_unit_test(border_happy_test_005);
    run_unit_test(border_happy_test_006);
    run_unit_test(border_happy_test_007);
    run_unit_test(border_happy_test_008);
}
