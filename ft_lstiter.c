/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:05:34 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/21 23:36:20 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	#1. The adress of a pointer to an element.
**	#2. The adress of the function used to iterate on the list. Iterates the
**	list ’lst’ and applies the function ’f’ to the content of each element.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			(f)(lst->content);
			lst = lst->next;
		}
	}
}

/*
**	1) Check performerd if the passed parameters are not NULL.
**	If the given parameters are not NULL, we perform iteration on the list.
**
**	2) Iteration on the list is performed by check the "next" link, while it's
**	not null we itterate through the list and apply the function F to the
**	content of the list.
*/