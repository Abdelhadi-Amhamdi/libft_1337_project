/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:18:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/18 21:05:35 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_if_overflow(long prev, long res)
{
	if (res / 10 == prev)
		return (0);
	return (1);
}

int	ft_atoi(const char *s)
{
	int		sign;
	long	result;
	long	previous;

	result = 0;
	sign = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			previous = result;
			result = (result * 10) + (*s - 48);
			if (check_if_overflow(previous, result) == 1)
			{
				if (sign == -1)
					return (0);
				return (-1);
			}
			s++;
		}
		else
			break ;
	}
	return (result * sign);
}

// int main()
// {
// 	char n[40] = "-99999999999999999999999999";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);

// 	printf("%d\n", i1);
// 	printf("%d", i2);

// 	return 0;
// }