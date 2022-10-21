/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:41:34 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/21 00:10:57 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * size);
	if (!p)
		return (0);
	while (i < size && s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (i < size && s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
