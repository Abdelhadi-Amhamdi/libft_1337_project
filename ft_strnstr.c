/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:38:02 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/16 21:26:57 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == to_find || len == 0)
		return ((char *)src);
	while (i < len)
	{
		j = 0;
		while (to_find[j])
		{
			if (src[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0' && i + j < len)
			return ((char *)src + i);
		i++;
	}
	return (0);
}
