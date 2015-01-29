#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "io.h"
#include "sort.h"

#define LIBARRAY_VERSION 0002

/**
 * Swaps a with b
 * @param a pointer to first value
 * @param b pointer to second value
 */
void swap(int *a, int *b);

/**
 * Inverts values in the array
 * @param v[] array with values to be inverted
 * @param len dim array logic lenght
 */
void invert_array(int v[], int len);

/**
 * Calculates the average value of array's values
 * @param v[] array containing values
 * @param len dim array logic lenght
 * @return average value
 */
float average(int v[], int len);

/**
 * Finds the maximum value in the array
 * @param v[] array where it searches for the max value
 * @param len dim array logic lenght
 * @return max value found, -1 if array has less than 2 elements
 */
int max_val(int v[], int len);

/**
 * Deletes a value from the array
 * @param v[] array containing the value that will be deleted
 * @param len pointer to array's logic lenght
 * @param val value to delete
 * return 0 if the value is deleted, 1 id the value is not found
 */
int elimina_valore(int v[], int *len, int val);
