/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:10:30 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/09 13:28:26 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

int get_tabs_sum(const char *s1, char sep)
{
	int size = 1;
	int i = 0;
	while(s1[i])
	{
		if(s1[i] != sep && s1[i+1] == sep)
			size++;
		i++;
	}
	return size;
}

char **ft_split(char const *s, char c)
{
	char **tabs;
	char *tab;
	char *sub_tab;
	int last_index = 0;
	int i = 0;
	int n = 0;
	int j;
	int k = 0;

	tab = ft_strtrim(s , " ");
	tabs = (char **)malloc(sizeof(char*) * get_tabs_sum(tab , c));
	if(!tabs)
		return 0;
	while(i < ft_strlen(tab)+1)
	{	
		if((tab[i] == c || tab[i] == '\0') && tab[i-1] != c )
	 	{
			k=i;
			while(tab[i+1] == ' ')
			{
				i++;
			}
	 		j = 0;
	 		sub_tab = ft_substr(tab , last_index , k-1);
	 		tabs[n] = malloc(sizeof(char) * ft_strlen(sub_tab));
	 		while(sub_tab[j])
	 		{
	 			tabs[n][j] = sub_tab[j];
	 			j++;
	 		}
			tabs[n][j] = '\0';
	 		n++;
			last_index = i+1;
	 	}
		i++;
	}
	return tabs;
}

int main()
{
	char **tabs;
	char tab[] = " x  hello     world! hey      there  d     ";
	tabs = ft_split(tab , ' ');
	int i = 0;
	int x = get_tabs_sum(ft_strtrim(tab , " "), ' ');
	while(i < x)
	{
		printf("%s\n" , tabs[i]);
		i++;
	}
	return 0;
}
