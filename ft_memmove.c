/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:58:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 11:01:43 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if(dest < src)
		ft_memcpy(dest , src, len);
	else
	{
		while (i < len--)
			((char *)dest)[len] = ((char *)src)[len];		
	}

		
	return (dest);
}


int main()
{
	char x[] = "hello world";
	char y[] = "hello world";
	printf("%s\n" , ft_memmove(x+1 , x+3, 3));
	printf("%s" , memmove(y+1 , y+3, 3));
}