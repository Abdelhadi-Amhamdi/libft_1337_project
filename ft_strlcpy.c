/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:04:37 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/13 15:04:17 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	if (length == 0)
		return (size);
	while (i < length - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}

// int main()
// {
// 	char dest[10];
// 	ft_strlcpy(dest, "lorem", 15);
// 	printf("%s" , dest);
// }
