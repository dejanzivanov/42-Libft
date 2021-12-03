/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:51:48 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 00:32:11 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adds the element ’new’ at the end of the list.
**	#1. The address of a pointer to the first link of a list.
**	#2. The address of a pointer to the element to be added to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *neew)
{
	t_list	*temp;

	temp = *lst;
	if (*lst)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = neew;
	}
	else
		*lst = neew;
}

/*
**	1) This function is used to add the list at the last element of a linked
**	list. This is acomplished by itterating through the list and find last node
**	whicht he "next" value is null and then we just do the address assignment.
**
**	2) In case that list is null parameter the "new" pointer address is assigned
**	to that list.
*/