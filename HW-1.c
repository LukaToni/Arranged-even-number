#include <stdio.h>
#include <stdlib.h>

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
	int *tabela = malloc (n * sizeof (int));
	for (i = 0; i < n; ++i)
		scanf ("%d", &tabela[i]);
	int a, b , swaps;
	for (;;)
	{
		swaps = 0;
		for (a = 0; a < n; ++a)
		{
			if (tabela[a] % 2 == 0)
			{
				for (b = a + 1; b < n; ++b)
				{
					if (tabela[b] % 2 == 0)
					{
						if (tabela[a] > tabela[b])
						{
							swap (&tabela[a], &tabela[b]);
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
		printf ("%d ", tabela[i]);
	printf ("\n");
}
