/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:25:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/20 12:55:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sum(const char *s1, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if ((s1[i] == c && s1[i-1] != c) || s1[i + 1] == '\0')
			size++;
		i++;
	}
	if (size == 0)
		size++;
	return (size);
}

void free_mem_all(char **tabs)
{
	int i = 0;
	while(tabs[i])
	{
		free(tabs[i]);
		tabs[i] = 0;
		i++;
	}
	free(tabs);
	tabs = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		prev;
	int		n;
	size_t	i;

	i = 0;
	n = 0;
	prev = 0;
	
	s = ft_strtrim(s, &c);
	if (!s)
		return (0);
	strs = (char **)malloc((sum(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	if (*s == 0)
	{
		strs[0] = 0;
		free((char *)s);
		return (strs);
	}
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			strs[n] = ft_substr(s + prev, 0, (i - prev));
			if(!strs[n])
			{
				free_mem_all(strs);
				return 0;
			}
			n++;
			while (s[i] == c)
				i++;
			prev = i;
		}
		i++;
	}
	free((char *)s);
	s = 0;
	strs[n] = 0;
	return (strs);
}
