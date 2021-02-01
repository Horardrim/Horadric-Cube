#include "hm_char_matrix.h"

static void alloc_matrix_horizon(hm_char_matrix_t * unalloc_matrix)
{
    int i;
    for(i = 0; i < unalloc_matrix->width; ++i)
    {
        int horizon_idx;
        unalloc_matrix->matrix_data[i] = (unsigned char *)malloc(sizeof(unsigned char) * unalloc_matrix->length);
        unsigned char * horizon = unalloc_matrix->matrix_data[i];
        if(horizon == NULL)
        {
            unalloc_matrix->status = Matrix_Corrupted;
            return;
        }

        //   set 0 to each byte
        for(horizon_idx = 0; horizon_idx < unalloc_matrix->length; ++horizon_idx)
        {
            horizon[horizon_idx] = 0;
        }
    }
    unalloc_matrix->status = Matrix_Good;
}

static void alloc_matrix_data(hm_char_matrix_t * unalloc_matrix)
{
    unalloc_matrix->matrix_data = (unsigned char **) malloc(sizeof(unsigned char *) * unalloc_matrix->width);
    if(unalloc_matrix->matrix_data == NULL)
    {
        unalloc_matrix->status = Matrix_Corrupted;
        return;
    }
    alloc_matrix_horizon(unalloc_matrix);
}



static float _get_matrix_value(hm_char_matrix_t * target_matrix, unsigned int horizon_val, unsigned int vertical_value)
{
    if(target_matrix->status != Matrix_Good)
    {
        return NAN;
    }
    else if(horizon_val > target_matrix->length || vertical_value > target_matrix->width)
    {
        return NAN;
    }
    else if(horizon_val == 0 || vertical_value == 0)
    {
        return NAN;
    }

    return (float) target_matrix->matrix_data[vertical_value - 1][horizon_val - 1];
}

static int _is_in_matrix(hm_char_matrix_t * target_matrix, unsigned int horizon_val, unsigned int vertical_value)
{
    if (target_matrix->status != Matrix_Good)
    {
        return 0;
    }
    unsigned int matrix_width = target_matrix->width;
    unsigned int matrix_length = target_matrix->length;

    if (vertical_value > 0 && vertical_value <= matrix_width &&
        horizon_val > 0 && horizon_val <= matrix_length)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

static int _is_at_matrix_boader(hm_char_matrix_t * target_matrix, unsigned int horizon_val, unsigned int vertical_value)
{
    unsigned int matrix_length = target_matrix->length;
    unsigned int matrix_width = target_matrix->width;

    if (!target_matrix->is_in_matrix(target_matrix, horizon_val, vertical_value))
    {
        return 0;
    }

    if (vertical_value == 1 || vertical_value == matrix_width ||
        horizon_val == 1 || horizon_val == matrix_length)
    {
        return 1;
    }

    return 0;
}

static int _set_matrix_value(hm_char_matrix_t * target_matrix, unsigned char matrix_value, unsigned int horizon_val, unsigned int vertical_value)
{
    if(target_matrix->is_in_matrix(target_matrix, horizon_val, vertical_value))
    {
        target_matrix->matrix_data[vertical_value - 1][horizon_val - 1] = matrix_value;
        return 1;
    }
    else
    {
        return 0;
    }
}

static void _display_matrix(hm_char_matrix_t * target_matrix)
{
    if(target_matrix->status != Matrix_Good)
    {
        printf("invalid matrix...\n");
        return;
    }

    unsigned int matrix_width = target_matrix->width;
    unsigned int matrix_length = target_matrix->length;
    unsigned int width_idx;
    unsigned int length_idx;
    char matrix_display_buff[MATRIX_DISPLAY_BUFF_SIZE];
    memset(matrix_display_buff, 0, MATRIX_DISPLAY_BUFF_SIZE);

    for(width_idx = 0; width_idx < matrix_width; ++width_idx)
    {
        for(length_idx = 0; length_idx < matrix_length; ++length_idx)
        {
            matrix_display_buff[strlen(matrix_display_buff)] = ' ';
            matrix_display_buff[strlen(matrix_display_buff)] = target_matrix->matrix_data[width_idx][length_idx];
            matrix_display_buff[strlen(matrix_display_buff)] = ' ';
        }
        printf("%s\n", matrix_display_buff);
        memset(matrix_display_buff, 0, MATRIX_DISPLAY_BUFF_SIZE);
    }
}

hm_char_matrix_t * _hm_char_matrix_t(unsigned int length, unsigned int width)
{
    hm_char_matrix_t * new_matrix = (hm_char_matrix_t *)malloc(sizeof(hm_char_matrix_t));

    if (new_matrix == NULL)
    {
        return new_matrix;
    }

    //   set value to member variables
    new_matrix->length = length;
    new_matrix->width = width;
    new_matrix->status = Matrix_Unallocated;

    //   set function pointers
    new_matrix->get_matrix_value = _get_matrix_value;
    new_matrix->is_at_matrix_boader = _is_at_matrix_boader;
    new_matrix->set_matrix_value = _set_matrix_value;
    new_matrix->is_in_matrix = _is_in_matrix;
    new_matrix->display_matrix = _display_matrix;

    alloc_matrix_data(new_matrix);

    return new_matrix;
}

void hm_char_matrix_t_(hm_char_matrix_t * target_matrix)
{
    unsigned int matrix_width = target_matrix->width;
    unsigned int width_idx;

    if (target_matrix->status != Matrix_Good)
    {
        return;
    }

    for (width_idx = 0; width_idx < matrix_width; ++width_idx)
    {
        unsigned char * horizon = target_matrix->matrix_data[width_idx];
        free (horizon);
    }

    free (target_matrix->matrix_data);
    free (target_matrix);
}
