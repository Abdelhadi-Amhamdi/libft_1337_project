/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:00:26 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/07 21:22:33 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		tab_size;
	int		i;
	char	*p;

	p = malloc(sizeof(char) * tab_size);
	tab_size = ft_strlen(s1);
	i = 0;
	while (i < tab_size)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
