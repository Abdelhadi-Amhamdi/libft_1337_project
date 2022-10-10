#include <stdio.h>
#include <stdlib.h>
#include "libft.h"



char *ft_substr(char const *s, unsigned int start, size_t len)
{

    char *p;
    size_t i = 0;
    p = malloc(sizeof(char) * len+1);

    while(i < len)
    {
        p[i] = s[start];
        i++;
        start++;
    }
    p[i] = '\0';
    return p;
}

