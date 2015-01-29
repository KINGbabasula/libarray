
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
