/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:25:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/11 23:33:45 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sum(const char *s1, char c)
{
	int	i;
	int	size;
	int	s;

	i = 0;
	size = 0;
	s = (int)ft_strlen(s1) + 1;
	while (i < s)
	{
		if ((s1[i] == c || s1[i] == '\0') && s1[i - 1] != c && i != 0)
			size++;
		i++;
	}
	return (size);
}

char **null_table(char **s)
{
	s = malloc(sizeof(char *));
	s[0] = 0;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		prev;
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	prev = 0;
	s = ft_strtrim(s, &c);
	if (s[0] == 0)
	{
		// strs = malloc(sizeof(char *));
		// strs[0] = 0;
		return (null_table(strs));
	}
	strs = (char **)malloc(sizeof(char *) * sum(s, c) + 1);
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			strs[n++] = ft_substr(s + prev, 0, sizeof(char) * (i - prev));
			while (s[i] == c)
				i++;
			prev = i;
		}
		i++;
	}
	strs[n] = 0;
	return (strs);
}
