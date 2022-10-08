/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:01:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/07 22:11:23 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t len)
{
	size_t	i;
	size_t	dest_size ;
	size_t	src_size ;
	size_t	range;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	range = len - dest_size - 1;
	i = 0;
	if (len <= dest_size)
		return (len - src_size);
	while (i < range)
	{
		dest[dest_size] = src[i];
		i++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (src_size - dest_size);
}
