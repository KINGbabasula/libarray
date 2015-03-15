
/**
 * Reorders values
 * @param v[] array that is getting reordered
 * @param len array logic lenght
 */
void bubble_sort(int v[], int len);

/**
 * Reorders values faster
 * @param v[] array that is getting reordered
 * @param len array logic lenght
 */
void bubble_sort_opt(int v[], int len);

/**
 * Reorders values searching for minimum and swapping it with the index position value
 * @param v[] array that is getting reordered
 * @param len array logic lenght
 */
void selection_sort(int v[], int len);

/**
 * Asks for values from keyboard to fill the array and reorders at the same time
 * @param v[] array that is getting filled and reordered
 * @param len array logic lenght
 */
void load_sort(int v[], int len);

/**
 * Reorders values recursively
 * @param v[] array that is getting reordered
 * @param len array logic lenght
 * @param start position where to start reordering
 */
void sort_recursive(int v[], int len, int start);
