/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:25 by musozer           #+#    #+#             */
/*   Updated: 2023/10/30 17:44:45 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*son;

	son = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (son -> next != NULL)
		son = son -> next;
	son -> next = new;
}
