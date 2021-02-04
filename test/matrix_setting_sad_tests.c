#include <stdio.h>
#include <string.h>

#include "matrix_setting_sad_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: matrix_setting_sad_test_001
 * Description:  Create a 4 * 4 matrix and set '&' on (0, 0),
 *             setting shall be failed.
 */
static int matrix_setting_sad_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (ts_matrix->set_matrix_value(ts_matrix, '&', 0, 0))
    {
        printf("[ERROR] (0, 0) shall have not set value & successfully.\n");
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
 * Test name: matrix_setting_sad_test_002
 * Description:  Create a 4 * 4 matrix and set '&' on (7, 8),
 *             setting shall be failed.
 */
static int matrix_setting_sad_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (ts_matrix->set_matrix_value(ts_matrix, '&', 7, 8))
    {
        printf("[ERROR] (7, 8) shall have not set value & successfully.\n");
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
 * Test name: matrix_setting_sad_test_003
 * Description:  Create a 4 * 4 matrix and set '&' on (7, 0),
 *             setting shall be failed.
 */
static int matrix_setting_sad_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (ts_matrix->set_matrix_value(ts_matrix, '&', 7, 0))
    {
        printf("[ERROR] (7, 0) shall have not set value & successfully.\n");
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
 * Test name: matrix_setting_sad_test_004
 * Description:  Create a 4 * 4 matrix and set '&' on (0, 7),
 *             setting shall be failed.
 */
static int matrix_setting_sad_test_004(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (ts_matrix->set_matrix_value(ts_matrix, '&', 0, 7))
    {
        printf("[ERROR] (0, 7) shall have not set value & successfully.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_matrix_setting_sad_tests()
{
    run_unit_test(matrix_setting_sad_test_001);
    run_unit_test(matrix_setting_sad_test_002);
    run_unit_test(matrix_setting_sad_test_003);
    run_unit_test(matrix_setting_sad_test_004);
}
