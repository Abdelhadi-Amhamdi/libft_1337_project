/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:01:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/17 04:59:17 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	dest_size ;
	size_t	src_size ;

	i = 0;
	if (!dest && len == 0)
		return (0);
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (len <= dest_size || len == 0)
		return (len + src_size);
	while (src[i] && i < len - dest_size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (src_size + dest_size);
}
