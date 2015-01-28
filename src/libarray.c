#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "../include/libarray.h"

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int request_lenght()
{
    int len;

    do
    {
        printf("Insert array lenght: ");
        scanf("%d", &len);
    }
    while(len <= 1);

    return len;
}

void load_array(int v[], int len)
{
    int i;

    for(i = 0; i < len; i++)
    {
        printf("Insert value %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void load_array_random(int v[], int len, int min, int max)
{
	int i;
	srand(time(NULL));
	
	for(i = 0; i < len; i++)
	{
		v[i] = (rand() % (max - min + 1)) + min;
	}
}

void copy_array(int v1[], int v2[], int len)
{
	int i;
	
	for(i = 0; i < len; i++)
	{
		v2[i] = v1[i];
	}
}

void print_array(int v[], int len)
{
    int i;

    printf("\n");
    for(i = 0; i < len; i++)
        printf("%d\n", v[i]);
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

void order(int v[], int len)
{
	int i, j;
	
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			if((v[j] > v[i]) && (i != j))
			{
				swap(&v[i], &v[i + 1]);
			}
		}
	}
}

void order_opt(int v[], int len)
{
	bool flag = false;
    int k = len - 1, i, s;
    do
    {
        i = 0;
        flag = false;
        s = k;

        while(i < s)
        {
            if(v[i] > v[i + 1])
            {
                swap(&v[i], &v[i + 1]);
                flag = true;
                k = i;
            }
            i++;
        }
    }
    while(flag);
}

void load_order(int v[], int len)
{
    int i, j, k, val, flag;
    
    for(i = 0; i < len; i++)
    {
        printf("Insert value %d: ", i + 1);
        scanf("%d", &val);
        
        flag = 0;
        
        if(i == 0)
        {
            v[i] = val;
            continue;
        }
        
        for(j = 0; j < i && flag == 0; j++)
        {
            if(val <= v[j])
            {
                for(k = i; k >= j; k--)
                    v[k + 1] = v[k];
                v[j] = val;
                flag = 1;
            }
        }
        
        if(flag == 0)
            v[i] = val;
    }
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
