/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/11 21:22:55 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft(const char *s, char *set, int index, char type)
{
	int	i;
	int	n;

	i = index;
	while (s[i])
	{
		n = 0;
		while (set[n])
		{
			if (s[i] == set[n])
			{
				if (type == 'i')
					i++;
				else if (type == 'd')
					i--;
				break ;
			}
			n++;
		}
		if (set[n] == '\0')
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char *set)
{
	char	*p;
	int		i;
	int		first_char;
	int		last_char;

	i = 0;
	first_char = ft(s1, set, i, 'i');
	last_char = ft(s1, set, ft_strlen(s1) - 1, 'd');
	if (last_char == -1)
	{
		p = malloc(sizeof(char));
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (last_char - first_char) + 1);
	while (first_char <= last_char)
	{
		p[i] = s1[first_char];
		first_char++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
