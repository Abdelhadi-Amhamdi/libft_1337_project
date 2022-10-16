/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:46:32 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/16 00:59:11 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*ft)(void *), void(*del)(void *))
{
    t_list *new;
    t_list *new_list;

    (void)del;
    new_list = 0;
    while(lst)
    {
        new = ft_lstnew(ft(lst->content));
        ft_lstadd_back(&new_list , new);
        lst = lst->next;
    }
    return new_list;
}