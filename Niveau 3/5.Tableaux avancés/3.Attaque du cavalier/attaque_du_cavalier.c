#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

char	scan_arr(char arr[8][8]);
void	print_arr(char arr[8][8]);

int		main(void)
{
	char	arr[8][8];
	int		i;
	int		j;

	scan_arr(arr);
	print_arr(arr);
	return (0);
}

char	scan_arr(char arr[8][8])
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			scanf("%c", &arr[i][j]);
			j++;
		}
		scanf("\n");
		i++;
	}
	return (**arr);
}

void	print_arr(char arr[8][8])
{
	int		i;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
