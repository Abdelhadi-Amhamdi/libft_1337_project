/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:38:02 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/21 00:14:02 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (src == to_find || (len == 0 && !*to_find) || !src)
		return ((char *)src);
	if (!*src)
		return (0);
	while (i < len)
	{
		j = 0;
		while (src[i + j] == to_find[j] && (i + j) \
		< len && src[i + j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)src + i);
		i++;
	}
	return (0);
}
