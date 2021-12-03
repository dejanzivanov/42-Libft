/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:41:32 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/21 23:15:34 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Adds the element ’new’ at the beginning of the list.
**	#1. The address of a pointer to the first link of a list.
**	#2. The address of a pointer to the element to be added to the list.
**
*/

void	ft_lstadd_front(t_list **lst, t_list *neew)
{
	if (lst != 0 && neew != 0)
	{
		neew->next = *lst;
		*lst = neew;
	}
}

/*
**	1) Input check is done if the both values are not NULL.
**	If the values are not null we set our links element next to the first link
**	that is pointed by lst in our parameters. We then set the pointer of lst to
**	"new" as our neew "head"(starting node) of our linked list.
*/