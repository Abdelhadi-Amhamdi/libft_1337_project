/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:01:07 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/14 13:37:55 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    t_list *t;

    t = *lst;
    while (t)
    {
        tmp = t->next;
        ft_lstdelone(t, del);
        t = tmp;
    }
    *lst = NULL;
}
