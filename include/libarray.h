#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "io.h"
#include "math.h"
#include "sort.h"

#define LIBARRAY_VERSION 0002

/**
 * Inverts values in the array
 * @param v[] array with values to be inverted
 * @param len dim array logic lenght
 */
void invert_array(int v[], int len);

/**
 * Deletes a value from the array
 * @param v[] array containing the value that will be deleted
 * @param len pointer to array's logic lenght
 * @param val value to delete
 * @return 0 if the value is deleted, 1 id the value is not found
 */
int delete_value(int v[], int *len, int val);
