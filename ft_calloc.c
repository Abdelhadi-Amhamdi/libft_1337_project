/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:20:38 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/08 16:09:01 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, sizeof (int) * size);
	return (p);
}
