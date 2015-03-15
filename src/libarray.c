#include "../include/libarray.h"

void invert_array(int v[], int len)
{
	int i, c;

	for(i = 0; i < len / 2; i++)
	{
		c = v[len - i - 1];
		v[len - i - 1] = v[i];
		v[i] = c;
	}
}

int delete_value(int v[], int *len, int val)
{
	int i, j;

	for(i = 0; i < *len; i++)
	{
		if(v[i] == val)
		{
			for(j = i; j < *len - 1; j++)
				v[j] = v[j + 1];

			(*len)--;
			return 0;
		}
	}
	return 1;
}
