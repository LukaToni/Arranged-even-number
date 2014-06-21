#include <stdio.h>
#include <stdlib.h>

//swap by pointer
void swap (int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main ()
{
	int n, i;
	scanf ("%d", &n);
	int *table = malloc (sizeof (int) * n);
	
	//insert number in table
	for (i = 0; i < n; ++i)
		scanf ("%d", &table[i]);
		
	int a, b , swaps;
	
	//bubble sort
	for (;;)
	{
		swaps = 0;
		for (a = 0; a < n; ++a)
		{
			//if it is even number
			if (table[a] % 2 == 0)
			{	
				//looking for next even number
				for (b = a + 1; b < n; ++b)
				{
					if (table[b] % 2 == 0)
					{
						//swap an even number
						if (table[a] > table[b])
						{
							swap (&table[a], &table[b]);
							++swaps;
						}
						a = b;
					}
				}
				continue;
			}
		}
		if (swaps == 0)
			break;	
	}
	
	for (i = 0; i < n ; ++i)
		printf ("%d ", table[i]);
	printf ("\n");
	
	return 0;
}
