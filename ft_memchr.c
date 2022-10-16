/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:55:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/15 20:08:10 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
int main()
{
	int x[] = {-49, 49, 1, 3, -100 , -1 , -2 , 3 };
	// printf("%x\n", ((unsigned char *)x)[0]);
	// printf("%x\n", ((unsigned char *)x)[1]);
	// printf("%x\n", ((unsigned char *)x)[2]);
	// printf("%x\n", ((unsigned char *)x)[3]);
	// printf("%x\n", ((unsigned char *)x)[4]);
	// printf("%x\n", ((unsigned char *)x)[5]);
	// printf("%x\n", -49);
	// printf("%x\n", -1);	
	printf("%d" , (int)ft_memchr(x , 1 , sizeof(int)*6));
}
