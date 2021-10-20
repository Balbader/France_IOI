#include <stdio.h>

typedef int t_bool;
#define TRUE 1
#define FALSE 0

void	horizontal_win(int nbr, int arr[40][40]);

int main(void)
{
	int		nbr;
	int		arr[40][40];
	int		count;
	int		i;
	int		j;

	scanf("%d\n", &nbr);
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			scanf("%d", &arr[i][j]);
			j++;
		}
		i++;
	}

	horizontal_win(nbr, arr);
	return (0);
}

void	horizontal_win(int nbr, int arr[40][40])
{
	int		i;
	int		j;
	int		count;
	int		temp;

	count = 0;
	temp = 0;
	i = 0;
	while (i < nbr)
	{
		j = 0;
		while (j < nbr)
		{
			if (arr[i][j] == arr[i][j + 1])
			{
				count++;
				temp = arr[i][j];
				if (count == nbr)
					printf("%d\n", temp);
			}
			else
				count = 0;
			j++;
		}
		i++;
	}
	if (count != nbr)
		printf("FALSE\n");
}
