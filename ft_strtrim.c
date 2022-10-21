/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/21 21:56:46 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	trim(const char *s, const char *set, int index, char type)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		first_char;
	int		last_char;

	i = 0;
	if (!s1 || !set)
		return (0);
	first_char = trim(s1, set, i, 'i');
	last_char = trim(s1, set, ft_strlen(s1) - 1, 'd');
	if (last_char == -1)
		return (ft_strdup("\0"));
	p = ft_substr(s1, first_char, (last_char - first_char + 1));
	return (p);
}
