/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:18:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/07 21:36:51 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*s)
	{
		if ((*s >= 9 && *s <= 13) || *s == 32)
			s++;
		else
			break ;
	}
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - 48);
			s++;
		}
		else
			break ;
	}
	return (result * sign);
}
