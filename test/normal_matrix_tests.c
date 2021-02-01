#include <stdio.h>
#include <string.h>

#include "normal_matrix_tests.h"

typedef int (* unit_test_func)(char * func_name);
extern void run_unit_test(unit_test_func func);

/**
 * Test name: normal_matrix_test_001
 * Description:  Create a 4 * 4 matrix and get the value of (2, 2),
 *             Getting the value shall be successful.
 */
static int normal_matrix_test_001(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float matrix_value = ts_matrix->get_matrix_value(ts_matrix, 2, 2);
    if(matrix_value != (float) 0)
    {
        printf("[ERROR] a initialized value (2, 2) of matrix is not 0: %u\n", (unsigned char) matrix_value);
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
 * Test name: normal_matrix_test_002
 * Description:    Create a 4 * 4 matrix and get the value of (4, 4),
 *              Getting the value shall be successful.
 */
static int normal_matrix_test_002(char * unit_test_func_name)
{
    strncpy(unit_test_func_name, __FUNCTION__, 512);
    printf("%s start\n", __FUNCTION__);

    hm_char_matrix_t * ts_matrix = _hm_char_matrix_t(4, 4);

    float matrix_value = ts_matrix->get_matrix_value(ts_matrix, 4, 4);
    if(matrix_value != (float) 0)
    {
        printf("[ERROR] a initialized value (4, 4) of matrix is not 0: %u\n", (unsigned char) matrix_value);
        hm_char_matrix_t_(ts_matrix);
        return 1;
    }
    else
    {
        hm_char_matrix_t_(ts_matrix);
        return 0;
    }
}

void run_normal_matrix_tests()
{
    run_unit_test(normal_matrix_test_001);
    run_unit_test(normal_matrix_test_002);
}
