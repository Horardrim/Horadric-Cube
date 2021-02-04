#ifndef TEST_WRAPPER_H
#define TEST_WRAPPER_H

#include "normal_matrix_tests.h"
#include "cross_border_sad_tests.h"
#include "cross_border_happy_tests.h"
#include "border_happy_tests.h"
#include "border_sad_tests.h"
#include "matrix_setting_sad_tests.h"
#include "matrix_setting_happy_tests.h"

typedef int (* unit_test_func)(char * func_name);

void run_unit_test(unit_test_func func);

void run_unit_tests();


#endif
