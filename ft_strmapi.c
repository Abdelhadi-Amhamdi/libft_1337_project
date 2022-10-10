/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:46:50 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 17:11:17 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>


char ft_add(unsigned int i , char c)
{
	return (c+i);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
	char *p;
	int i = 0;

	p = malloc(sizeof(char) * ft_strlen(s));

	if(!p)
		return 0;
	
	while(*s)
	{
		p[i] = (*f)(1, *s);
		i++;
		s++;
	}
	p[i] = '\0';
	return p;
}


int main()
{
	printf("%s" , ft_strmapi("helloworld" , &ft_add));
	return 0;
}
