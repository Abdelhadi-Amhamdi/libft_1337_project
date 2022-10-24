/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:25:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/24 13:50:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sum(const char *s1, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if ((s1[i] == c && s1[i - 1] != c) || s1[i + 1] == '\0')
			size++;
		i++;
	}
	if (size == 0)
		size++;
	return (size);
}

static void	free_all(char **tabs)
{
	int	i;

	i = 0;
	while (tabs[i])
	{
		free(tabs[i]);
		i++;
	}
	free(tabs);
}

static void	split_words(const char *s, char c, char **strs, int *n)
{
	int		prv;
	size_t	i;

	i = 0;
	prv = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			strs[*n] = ft_substr(s + prv, 0, (i - prv));
			if (!strs[*n])
				free_all(strs);
			while (s[i] == c)
				i++;
			prv = i;
			*n = *n + 1;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		n;

	n = 0;
	s = ft_strtrim(s, &c);
	if (!s)
		return (0);
	strs = (char **)malloc((sum(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	if (!*s)
	{
		strs[0] = 0;
		free((char *)s);
		return (strs);
	}
	split_words(s, c, strs, &n);
	strs[n] = 0;
	free((char *)s);
	return (strs);
}
