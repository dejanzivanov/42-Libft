/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 00:28:04 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 13:32:30 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates (with malloc(3)) and returns a new string, which is the result
**	of the concatenation of ’s1’ and ’s2’.
**
**
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp;
	size_t			i;
	size_t			j;

	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	j = 0;
	temp = (char *)malloc(sizeof(char) * (i + 1));
	if (temp == NULL)
		return (temp);
	while (s1[j])
	{
		temp[j] = s1[j];
		j++;
	}
	i = j;
	j = 0;
	while (s2[j] != '\0')
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = 0;
	return (temp);
}

/*
**	1) This function work in the way that joins two strings together.
**	in the initial part of the function we get the length of the both strings,
**	an then allocate the memory to it incluing the place for NULL terminating
**	character. If the memory allocation faile, we return empty pointer.
**
**	2) In the second part of the function we give all the character from first
**	and second pointer to a temporary pointer, and in the end, we put the NULL
**	terminating character to it and return it.
**
*/