/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:06:58 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/24 17:42:14 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < len)
		len = size;
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup("\0"));
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
