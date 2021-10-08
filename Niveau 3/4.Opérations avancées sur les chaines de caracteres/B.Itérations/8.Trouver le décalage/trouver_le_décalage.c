#include <stdio.h>

void	cesar(char *str, int shift);

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
