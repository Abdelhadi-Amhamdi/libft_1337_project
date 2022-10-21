/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:20:38 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/21 22:27:46 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	
	if(count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	total = count * size;
	if (total /count != size && count != 0)
		return (0);
	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero (p, count * size);
	return (p);
}

// int main()
// {
// 	char *p = ft_calloc(SIZE_MAX , SIZE_MAX);
// 	printf("%s\n" , p);
// 	char *s = calloc(SIZE_MAX , SIZE_MAX);
// 	printf("%s\n" , s);
// }
