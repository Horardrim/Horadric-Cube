#include <stdio.h>

#include "test_wrapper.h"

void run_unit_test(unit_test_func func)
{
    char func_name[512];
    if(func(func_name))
    {
        printf("%s failed\n", func_name);
        exit(1);
    }
    else
    {
        printf("%s succeeded\n", func_name);
    }
}

void run_unit_tests()
{
    run_normal_matrix_tests();
    run_cross_border_sad_tests();
    run_cross_border_happy_tests();
    run_border_sad_tests();
    run_border_happy_tests();
    run_matrix_setting_sad_tests();
    run_matrix_setting_happy_tests();
}
