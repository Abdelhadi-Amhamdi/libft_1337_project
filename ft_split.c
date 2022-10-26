/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:31:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/26 21:02:31 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_tabs_sum(const char *s1, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if ((s1[i] == c && s1[i - 1] != c && i != 0) || s1[i + 1] == '\0')
			size++;
		i++;
	}
	return (size);
}

static char	**ft_free(char **tabs, int index)
{
	while (index >= 0)
	{
		free(tabs[index]);
		index--;
	}
	free(tabs);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (get_tabs_sum(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			str[i++] = ft_substr(s, 0, len);
		if (len != 0 && !str[i - 1])
			return (ft_free(str, i - 1));
		s += len;
	}
	str[i] = NULL;
	return (str);
}
