/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:29 by aamhamdi          #+#    #+#             */
/*   Updated: 2022/10/14 12:58:59 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void del(t_list *node)
{
    free(node->content);
}


void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst);
}