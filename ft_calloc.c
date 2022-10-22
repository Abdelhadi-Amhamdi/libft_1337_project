/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:20:38 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/22 13:40:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	total = count * size;
	if (count == 0 || size == 0)
		total = 1;
	if (total / count != size && count != 0)
		return (0);
	p = malloc(total);
	if (!p)
		return (0);
	ft_bzero (p, count * size);
	return (p);
}
