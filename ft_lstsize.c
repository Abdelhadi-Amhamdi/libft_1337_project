/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:05:06 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/13 22:55:46 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i = 1;
    if(!lst)
        return 0;
    while(lst->next && i++)
        lst = lst->next;
    return i;
}