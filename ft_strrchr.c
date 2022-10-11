/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:07:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/11 18:26:10 by aamhamdi         ###   ########.fr       */
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
		if (s[size] == c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
