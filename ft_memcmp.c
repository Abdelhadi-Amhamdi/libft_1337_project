/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:56:49 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/07 21:47:44 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		x;
	int		y;

	i = 0;
	while (i < n)
	{
		x = ((unsigned char *)s1)[i];
		y = ((unsigned char *)s2)[i];
		if (x != y)
			return (x - y);
		i++;
	}
	return (0);
}
