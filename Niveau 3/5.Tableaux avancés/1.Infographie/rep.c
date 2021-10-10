#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

int main(void)
{
	char acronyme[201];
	char str[201]; // ligne
	char lettre;
	bool estAcronyme = true;
	bool estChangementEffectue = false;
	int nb;
	int index = 0;
	int j = 0;
	int i = 0;

	scanf("%s\n%d\n", acronyme, &nb);

	while (i < nb)
	{
		scanf("%[^\n]\n", str);

		index = 0;
		estAcronyme = true;
		j = 0;
		while (str[j] != '\n')
		{
			lettre = str[j];
			if (lettre == acronyme[index])
				index++;
			else
			{
				estAcronyme = false;
				break;
			}
			while (str[j] != ' ')
				j++;
			j++;
		}
		if (estAcronyme)
			printf("%s\n", str);
		i++;
	}
	return 0;
}
