
#include <stdlib.h>
#include "hm_cube.h"

int add(int a, int b)
{
    int * p = (int *)malloc(sizeof(int));
    *p = 10;
    free(p);
    return a + b;
}
