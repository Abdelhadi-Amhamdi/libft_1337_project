/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:10:30 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/08 18:30:35 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int is_sep(const char c,char sep)
{
	if(c == sep)
		return 1;
	return 0;
}

int get_tabs_sum(const char *s1, char sep)
{
	int size = 1;
	while(*s1)
	{
		if(is_sep(*s1, sep) == 1)
			size++;
		s1++;
	}
	return size;
}



char **ft_split(char const *s, char c)
{
	int tabs_length;
	int current_i;
	char **tabs;
	char *tab;
	int index;
	int size;
	int i;
	int j;

	tabs_length = get_tabs_sum(s, c);
	size = strlen(s);
	tabs = malloc(sizeof(char *) * tabs_length);
	current_i = 0;
	i = 0;
	j = 0;
	while(i < size+1)
	{
		if(is_sep(s[i], c) == 1 || s[i] == '\0')
		{
			
			int n = 0;
			index = i-current_i;
			tab = ft_substr(s+current_i, index);
			tabs[j] = malloc(sizeof(char) * index);
			while(tab[n])
			{
				tabs[j][n] = tab[n];
				n++;
			}
			tabs[j][n] = '\0';
			j++;
			current_i = i+1;
		}
		i++;
	}	
	return tabs;
}

int main()
{
	char **tabs;
	tabs = ft_split("hello world! hey there" , ' ');
	int i = 0;
	while(i < 4)
	{
		printf("%s\n" , tabs[i]);
		i++;
	}
	return 0;
}
