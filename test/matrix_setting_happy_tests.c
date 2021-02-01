#include <stdio.h>
#include <string.h>

#include "border_happy_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: matrix_setting_happy_test_001
 * Description:  Create a 4 * 4 matrix and set '&' on (4, 4),
 *             setting shall be successful and the value of (4, 4) shall be &.
 */
static int matrix_setting_happy_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (!ts_matrix->set_matrix_value(ts_matrix, '&', 4, 4))
    {
        printf("[ERROR] (4, 4) shall have set value & successfully.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else if (ts_matrix->get_matrix_value(ts_matrix, 4, 4) != '&')
    {
        printf("[ERROR] (4, 4) shall have had the value '&'.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        ts_matrix->display_matrix(ts_matrix);
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: matrix_setting_happy_test_002
 * Description:  Create a 4 * 4 matrix and set '&' on (1, 2),
 *             setting shall be successful and the value of (1, 2) shall be &.
 */
static int matrix_setting_happy_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (!ts_matrix->set_matrix_value(ts_matrix, '&', 1, 2))
    {
        printf("[ERROR] (1, 2) shall have set value & successfully.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else if (ts_matrix->get_matrix_value(ts_matrix, 1, 2) != '&')
    {
        printf("[ERROR] (1, 2) shall have had the value '&'.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        ts_matrix->display_matrix(ts_matrix);
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

/**
 * Test name: matrix_setting_happy_test_003
 * Description:  Create a 4 * 4 matrix and set '&' on (1, 1),
 *             setting shall be successful and the value of (1, 1) shall be &.
 */
static int matrix_setting_happy_test_003(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);
    if (!ts_matrix->set_matrix_value(ts_matrix, '&', 1, 1))
    {
        printf("[ERROR] (1, 1) shall have set value & successfully.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else if (ts_matrix->get_matrix_value(ts_matrix, 1, 1) != '&')
    {
        printf("[ERROR] (1, 1) shall have had the value '&'.\n");
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        ts_matrix->display_matrix(ts_matrix);
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_matrix_setting_happy_tests()
{
    run_unit_test(matrix_setting_happy_test_001);
    run_unit_test(matrix_setting_happy_test_002);
    run_unit_test(matrix_setting_happy_test_003);
}
