#include <stdio.h>

void	cesar(char *str, int shift);
void	freq_counter(char *str);
int		count_letter(char *str);

int 	main(void)
{
    return (0);
}

void	cesar(char *str, int shift)
{
	int		c;
	int		i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 'A';
			c += shift;
			while (c < 0)
				c += 26;
			while (c > 0)
				c -= 26;
			str[i] = c + 'A';
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 'a';
			c += shift;
			while (c < 0)
				c += 26;
			while (c > 0)
				c -= 26;
			str[i] = c + 'a';
		}
		i++;
	}
	printf("%s\n", str);
}

void	freq_counter(char *str)
{
	char	arr[27] = "abcdefghijklmnopqrstuvwxyz";
	int		count[27] = {0};
	int		i;
	int		j;
	int		tot_letters;
	double	res;

	tot_letters = count_letter(str);
}


int		count_letter(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
			count++;
		i++;
	}
	return (count);
}

