/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:07:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/07 22:14:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s) + 1;
	while (i < size)
	{
		if (s[size] == c)
			return ((char *)s + size);
		size--;
		i++;
	}
	return (0);
}
