#include "../include/libarray.h"

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

float average(int v[], int len)
{
	float av = 0;
	int i;

	for(i = 0; i < len; i++)
		av += (float) v[i];
	av /= (float) len;

	return av;
}

int max_val(int v[], int len)
{
	int i, max;

	if(len < 2)
		return -1;

	max = v[0];

	for(i = 1; i < len; i++)
	{
		if(v[i] > max)
			max = v[i];
	}

	return max;
}
