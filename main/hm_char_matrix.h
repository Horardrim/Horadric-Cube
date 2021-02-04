#ifndef HM_CHAR_MATRIX_H
#define HM_CHAR_MATRIX_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

typedef enum MATRIC_STATUS {
    Matrix_Good = 0,
    Matrix_Unallocated,
    Matrix_Corrupted
} MATRIC_STATUS;

#define MATRIX_DISPLAY_BUFF_SIZE 1024

struct hm_char_matrix_t;
typedef float (* _get_matrix_value_func)(struct hm_char_matrix_t *, unsigned int, unsigned int);
typedef int (* _is_at_matrix_boader_func)(struct hm_char_matrix_t *, unsigned int, unsigned int);
typedef int (* _set_matrix_value_func)(struct hm_char_matrix_t *, unsigned char, unsigned int, unsigned int);
typedef int (* _is_in_matrix_func)(struct hm_char_matrix_t *, unsigned int, unsigned int);
typedef void (* _display_matrix_func)(struct hm_char_matrix_t *);

typedef struct hm_char_matrix_t {
    unsigned char ** matrix_data;
    unsigned int length;
    unsigned int width;
    MATRIC_STATUS status;

    _get_matrix_value_func get_matrix_value;
    _is_at_matrix_boader_func is_at_matrix_boader;
    _set_matrix_value_func set_matrix_value;
    _is_in_matrix_func is_in_matrix;
    _display_matrix_func display_matrix;
} hm_char_matrix_t;

hm_char_matrix_t * _hm_char_matrix_t(unsigned int length, unsigned int width);
void hm_char_matrix_t_(hm_char_matrix_t * target_matrix);

#endif
