#include "utils.h"
#include <stdio.h>

char	*scanf_valid_str(char *dest)
{
	int	res = 0;

	while (1)
	{
		res = scanf("%s", dest);
		if (res <= 0)
		{
			printf("Please enter a valid option\n");
			continue;
		}
		break;
	}
	return dest;
}
