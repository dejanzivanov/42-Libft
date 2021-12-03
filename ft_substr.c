/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:28:51 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 13:54:58 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
**
**
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[k] != '\0')
	{
		if (k >= start && j < len)
		{
			str[j] = s[k];
			j++;
		}
		k++;
	}
	str[j] = 0;
	return (str);
}

/*	#1. The string from which to create the substring.
**	#2. The start index of the substring in the string 's’
**	#3. The maximum length of the substring.
**
**	Message to future Deki, learn to reuse functions, you could have used
**	ft_strlcpy here.
**
**	1) Creating temporary array and allocating the character size of the length
**	to it + 1 to include NULL terminator character. If the memory allocation has
**	failed we return NULL.
**
**	2) While the index K is greater then start, and J index is less then length
**	we assign S pointer to STR pointer, (room for optimization here). In the end
**	we add null and return STR pointer.
**
**
**
**
**
**
**
*/