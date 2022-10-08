#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft(const char *s, char *set, int index , char type)
{
    int i = index;
    int n;
    int k = 0;

    while (s[i])
    {
        n = 0;
        while (set[n])
        {
            if (s[i] == set[n])
            {
                if(type == 'i')
                    i++;
                else if(type == 'd')
                    i--;
                break;
            }
            n++;
        }
        if (set[n] == '\0')
            k = 1;
        if (k == 1)
            break;
    }
    return i;
}

char *ft_strtrim(char const *s1, char *set)
{
    char *p;
    int i = 0;
   
    int first_char;
    int last_char;

    p = malloc(sizeof(char) * 10);

    first_char = ft(s1, set, i, 'i');

    int x = strlen(s1 + first_char);

    last_char = ft(s1, set, x, 'd');

    while (first_char <= last_char)
    {
        p[i] = s1[first_char];
        first_char++;
        i++;
    }
    p[i] = '\0';
    return p;
}

int main()
{
    const char x[] = "   dla   h hello worlhd             ";
    printf("%s", ft_strtrim(x, "d "));
}