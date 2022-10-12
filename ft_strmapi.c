/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:46:50 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/12 18:22:29 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>


// char ft_add(unsigned int i , char c)
// {
// 	return (c+i);
// }
char *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
	char *p;
	int i = 0;

	p = malloc(sizeof(char) * ft_strlen(s)+1);
	if(!p)
		return 0;
	
	while(s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return p;
}