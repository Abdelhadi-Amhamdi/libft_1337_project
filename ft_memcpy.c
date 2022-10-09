/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:57:37 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 13:05:46 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			printf("%p --- %p\n" , &dest[i] , &src[j]);
			if (&dest[i] == &src[j])
				return (0);
			j++;
		}
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int main()
{
	char x[] = "hello world";
	printf("%s" ,ft_memcpy(x+4 , x+1 , 3));

	return 0;
}
