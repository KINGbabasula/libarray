#include "../include/libarray.h"

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

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

int delete_value(int v[], int *len, int val)
{
    int i, j;
	bool del = false;
    
    for(i = 0; i < *len; i++)
    {
        if(v[i] == val)
        {
            for(j = i; j < *len - 1; j++)
                v[j] = v[j + 1];
			
			del = true;
        }
    }
	
	if(del)
	{
		(*len)--;
		return 0;
	}
	else
	{
		return 1;
	}
}
