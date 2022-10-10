/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:21:23 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 17:38:11 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_test(unsigned int i , char *tab)
{	
	if(tab[i] >= 90)
		tab[i] = tab[i]-32;
}


void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i = 0;
	while(s[i])
	{
		(*f)(i, s);
		i++;
	}
}


int main()
{
	char x[] = "hello world";
	ft_striteri(x, &ft_test);
	printf("%s" , x);
	return 0;
}
