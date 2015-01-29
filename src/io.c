#include "../include/libarray.h"

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
