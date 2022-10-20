/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:07:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/19 00:28:11 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	int	i;

	i = 0;
	size = (int)ft_strlen(s);
	while (i <= size)
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
