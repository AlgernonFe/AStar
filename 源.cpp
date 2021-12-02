#include<stdio.h>
#include<stdlib.h>

int main()
{
	int** m, i, j, sig = 0, g;
	m = (int**)malloc(3 * sizeof(int*));
	for (i = 0; i < 3; i++)
		m[i] = (int*)malloc(3 * sizeof(int));

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf_s("%d", &m[i][j]);
	}

	printf("Ô­Í¼£º\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (m[i][j] == 0)
				printf("  ");
			else
				printf("%d ",m[i][j]);
		}
		printf("\n");
	}

	while (sig == 0)
	{
		if (m[0][0] == 1 && m[0][1] == 2 && m[0][2] == 3 && m[1][0] == 8 && m[1][1] == 0 && m[1][2] == 4 && m[2][0] == 7 && m[2][1] == 6 && m[2][2] == 5)
		{
			sig = 1;
			break;
		}

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (m[i][j] == 0);
					
			}
		}
	}

	printf("\n%d", sig);
}