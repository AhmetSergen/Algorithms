#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define ARRAY_SIZE 10000
#define SIZE_1	10
#define SIZE_2	100
#define SIZE_3	10000
#define EXECUTION_COUNT	100000

int sort(int* a, int size);
float elapsed_time(struct timeval t0, struct timeval t1);
int run_and_measure(int* a, int size);

int main()
{
	int i = 0;
	int *a = NULL;

	a = malloc(ARRAY_SIZE * sizeof(int));
	
	for (i=0; i<10000; i++)
	{
		a[i] = i;	
	}

	run_and_measure(a, SIZE_1);
	run_and_measure(a, SIZE_2);
	run_and_measure(a, SIZE_3);
	
	free(a);

	return EXIT_SUCCESS;
}

int run_and_measure(int* a, int size)
{
	struct timeval t0;
	struct timeval t1;
	int i = 0;

	gettimeofday(&t0, 0);

	for (i=0; i<EXECUTION_COUNT; i++)
	{
		sort(a, size);
	}
	
	gettimeofday(&t1, 0);

	printf("array with %d items execution time : %f milliseconds.\n", size, elapsed_time(t0, t1));

	return 0;
}

/*
   O(n^2)
   Sorting given array 
   Execution time will be quadratic
*/
int sort(int* a, int size)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	
	for(i=0; i<size; i++)
	{
		for (j=0; j<i; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	return 0;
}

float elapsed_time(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}
