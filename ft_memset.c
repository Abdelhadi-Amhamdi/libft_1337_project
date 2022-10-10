/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:59:08 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 18:36:48 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (0);
	while (i < count)
	{
		((unsigned char *)dest)[i] = ch;
		i++;
	}
	return (dest);
}
