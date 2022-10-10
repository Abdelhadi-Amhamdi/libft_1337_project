/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:25:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 20:34:23 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	size_calc(int c)
{
	int	size;

	if (c < 0)
		size = 1;
	else
		size = 0;
	while (c)
	{
		size++;
		c = c / 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*p;
	int		x;
	int		s ;
	long	n;

	n = nb;
	if (n == 0)
		s = 2;
	else
		s = size_calc(n);
	p = malloc(sizeof(char) * s);
	if (!p)
		return (0);
	if (n == 0)
	{
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	x = s;
	while (n)
	{
		p[s - 1] = (n % 10) + 48;
		n = n / 10;
		s--;
	}
	p[x] = '\0';
	return (p);
}
