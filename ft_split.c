/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:25:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/17 04:56:57 by aamhamdi         ###   ########.fr       */
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
		if (s1[i] == c || s1[i + 1] == '\0')
			size++;
		i++;
	}
	return (size);
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
	if (!s)
		return (0);
	s = ft_strtrim(s, &c);
	strs = (char **)malloc((sum(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	while (i < ft_strlen(s)+1)
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

// int main()
// {
// 	char *s = "split       this for   me  !";
// 	int i = 0;
// 	char **result = ft_split(s, ' ');
// 	while(i < 5)
// 	{
// 		printf("%s\n" , result[i]);
// 		i++;
// 	}
// }
