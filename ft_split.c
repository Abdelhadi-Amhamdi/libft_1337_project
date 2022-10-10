#include "libft.h"
#include <string.h>
#include<stdlib.h>
#include<stdio.h>

int sum(const char *s1 , char c)
{
    int i = 0;
    int size = 0;
    int s = 0;

    s = strlen(s1)+1;
    while(i < s)
    {
        if((s1[i] == c || s1[i] == '\0') && s1[i-1] != c)
        {
            size++;
        }
        i++;
    }
    return size;
}

char **ft_split(char const *s, char c)
{
    char **strs;
    size_t i = 0;
	int j = 0;
	int n = 0;
    int prev = 0;

	s = ft_strtrim(s, &c);
    printf("%c--" , s[0]); 
    strs = (char **)malloc(sizeof(char *) * sum(s , c) + 1);
    while(i < ft_strlen(s)+1)
    {
        if(s[i] == c || s[i] == '\0')
        {
            j = 0;
            strs[n] = malloc(sizeof(char) * (i-prev));
            if (!strs[n])
                return (0);            
            char *x = ft_substr(s+prev , 0 , sizeof(char)*(i-prev));
            while(x[j])
            {
                strs[n][j] = x[j];
                j++;
            }
            strs[n][j] = '\0';
            
            while(s[i] == c)
                i++;
            prev = i;
            n++;
            printf("%s\n" , strs[n]);
        }
        i++;
    }
    strs[n] = 0;

    return(strs);
}
