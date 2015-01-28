
/**
 * Swaps a with b
 * @param a pointer to first value
 * @param b pointer to second value
 */
void swap(int *a, int *b);

/**
 * Requests the logic length to be assigned to the array
 * @return logic lenght
 */
int request_lenght();

/**
 * Loads array with values requested from keyboard
 * @param v[] array to fill
 * @param len dim array logic lenght
 */
void load_array(int v[], int len);

/**
 * Loads array with random values between min and max
 * @param v[] array to fill
 * @param len dim array logic lenght
 * @param min min value
 * @param max max value
 */
void load_array_random(int v[], int len, int min, int max);

/** 
 * Copies array 1 to array 2
 * @param v1[] array being copied
 * @param v2[] array copied
 * @param len dim array logic lenght
 */
void copy_array(int v1[], int v2[], int len);

/**
 * Prints the array
 * @param v[] array to print
 * @param len dim array logic lenght
 */
void print_array(int v[], int len);

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
 * Reorders values
 * @param v[] array that is getting reordered
 * @param dim array logic lenght
 */
void order(int v[], int len);

/**
 * Reorders values faster
 * @param v[] array that is getting reordered
 * @param len array logic lenght
 */
void order_opt(int v[], int len);

/**
 * Asks for values from keyboard to fill the array and reorders at the same time
 * @param v[] array that is getting filled and reordered
 * @param len array logic lenght
 */
void load_order(int v[], int len);

/**
 * Deletes a value from the array
 * @param v[] array containing the value that will be deleted
 * @param len pointer to array's logic lenght
 * @param val value to delete
 * return 0 if the value is deleted, 1 id the value is not found
 */
int elimina_valore(int v[], int *len, int val);
