/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:11:01 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 13:24:54 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  strdup()  function  returns a pointer to a new string which is a
**	duplicate of the string s.  Memory for the new string is obtained with
**	malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *s)
{
	char	*temp;
	size_t	len;

	len = ft_strlen(s);
	temp = malloc((len + 1) * sizeof(char));
	if (temp != NULL)
	{
		ft_strlcpy(temp, s, len + 1);
	}
	return (temp);
}

/*
**	1) Counting the length of initial string, and allocating memory to it.
**
**	2) If memory allocation was successull we just copy the original string,
**	int newly freshly create pointer an we return it.
*/