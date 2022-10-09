/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 11:19:22 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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

    last_char = ft(s1, set, ft_strlen(s1)-1, 'd');

    while (first_char <= last_char)
    {
        p[i] = s1[first_char];
        first_char++;
        i++;
    }
    p[i] = '\0';
    return p;
}

