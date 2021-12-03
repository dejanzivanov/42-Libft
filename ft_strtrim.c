/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 01:19:01 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 14:15:08 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
**	specified in ’set’ removed from the beginning and the end of the string.
**	#1. The string to be trimmed.
**	#2. The reference set of characters to trim.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*temp;
	size_t			start;
	size_t			end;

	if (ft_strlen(s1) != 0 && ft_strlen(set) != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end -1]) && end > start)
			end--;
		temp = (char *)malloc(sizeof(char) * (end - start + 1));
		if (temp)
			ft_strlcpy(temp, &s1[start], end - start + 1);
		return (temp);
	}
	return (NULL);
}

/*
**	This function is created if the length of the both parameter pointers is not
**	0.
**
**	1) In the first part of the function we are searching for the set in the
**	start and at the end of the string.
**
**	2)After both whiles are done with thel oops we allocate given memory to the
**	tempory pointer. If the allocation was successful we return temp pointer
**	that has gotten the copied string using ft_strlcpy function with the
**	given index parameters from the while loop.
*/