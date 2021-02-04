#include <stdio.h>
#include <string.h>

#include "border_sad_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: border_sad_test_001
 * Description:  Create a 4 * 4 matrix and check if (4, 7) is on border,
 *             The result shall be false.
 */
static int border_sad_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 4, 7))
    {
        printf("[ERROR] (4, 7) shall not have been at boader.\n");
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
 * Test name: border_sad_test_002
 * Description:  Create a 4 * 4 matrix and check if (7, 4) is on border,
 *             The result shall be false.
 */
static int border_sad_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 7, 4))
    {
        printf("[ERROR] (7, 4) shall not have been at boader.\n");
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
 * Test name: border_sad_test_003
 * Description:  Create a 4 * 4 matrix and check if (0, 0) is on border,
 *             The result shall be false.
 */
static int border_sad_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 0, 0))
    {
        printf("[ERROR] (0, 0) shall not have been at boader.\n");
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
 * Test name: border_sad_test_004
 * Description:  Create a 4 * 4 matrix and check if (7, 7) is on border,
 *             The result shall be false.
 */
static int border_sad_test_004(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 7, 7))
    {
        printf("[ERROR] (7, 7) shall not have been at boader.\n");
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
 * Test name: border_sad_test_005
 * Description:  Create a 4 * 4 matrix and check if (2, 3) is on border,
 *             The result shall be false.
 */
static int border_sad_test_005(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 2, 3))
    {
        printf("[ERROR] (2, 3) shall not have been at boader.\n");
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
 * Test name: border_sad_test_006
 * Description:  Create a 4 * 4 matrix and check if (0, 2) is on border,
 *             The result shall be false.
 */
static int border_sad_test_006(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if(ts_matrix->is_at_matrix_boader(ts_matrix, 0, 2))
    {
        printf("[ERROR] (0, 2) shall not have been at boader.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_border_sad_tests()
{
    run_unit_test(border_sad_test_001);
    run_unit_test(border_sad_test_002);
    run_unit_test(border_sad_test_003);
    run_unit_test(border_sad_test_004);
    run_unit_test(border_sad_test_005);
    run_unit_test(border_sad_test_006);
}
