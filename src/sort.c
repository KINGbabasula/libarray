#include "../include/libarray.h"

void bubble_sort(int v[], int len)
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

void bubble_sort_opt(int v[], int len)
{
	bool flag;
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

void selection_sort(int v[], int len)
{
	int i, j, min, pos;
	
	for(i = 0; i < len - 1; i++)
	{
		min = v[i];

		for(j = i + 1; j < len; j++)
		{
			if(min > v[j])
			{
				pos = j;
				min = v[j];
			}
		}
		swap(&v[i], &v[pos]);
	}
}

void load_sort(int v[], int len)
{
	int i, j, k, val;
	bool flag;

	for(i = 0; i < len; i++)
	{
		printf("Insert value %d: ", i + 1);
		scanf("%d", &val);

		flag = false;

		if(i == 0)
		{
			v[i] = val;
			continue;
		}

		for(j = 0; j < i && !flag; j++)
		{
			if(val <= v[j])
			{
				for(k = i; k >= j; k--)
					v[k + 1] = v[k];
				v[j] = val;
				flag = true;
			}
		}

		if(!flag)
			v[i] = val;
	}
}

void sort_recursive(int v[], int len, int start)
{
	int i = start, min, pos;

	if(start >= len - 1)
		return;

	min = v[i];
		
	for(i = start + 1; i < len; i++)
	{
		if(min > v[i])
		{
			pos = i;
			min = v[i];
		}
	}
	swap(&v[start], &v[pos]);
	
	sort_recursive(v, len, start + 1);
}
