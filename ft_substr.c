
#include "libft.h"
#include<stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
	int j = 0;
	char *p;

	i = start;
	p = malloc(sizeof(char) * len+1);
	while(i <= len)
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[i] = '\0';
	return p;
}