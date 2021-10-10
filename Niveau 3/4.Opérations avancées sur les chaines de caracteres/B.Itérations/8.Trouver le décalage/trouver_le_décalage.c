#include <stdio.h>

void	cesar(char *str, int shift);
void	to_lower(char *str);
int		freq_counter(char *str);

int		main(void)
{
	char	str[10001] = "Np epiep fetwtdp fy opnlwlrp op zykp nlclnepcpd.";
	char	new_str[10001];
	int		res;
	int		shift;
	res = freq_counter(str);
	printf ("res: %d\n", res);
	shift = 11;
	printf ("shift: %d\n", shift);
	cesar(str, shift);
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

int		freq_counter(char *str)
{
	char	alph[27] = "abcdefghijklmnopqrstuvwxyz";
	char	res;
	int		arr[26] = {0};
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (alph[j])
		{
			if (str[i] == alph[j])
			{
				arr[j] += 1;
				if (arr[j] > count)
				{
					count = arr[j];
					res	= alph[j];
				}
			}
			j++;
		}
		i++;
	}
	return (count);
}

void	to_lower(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

