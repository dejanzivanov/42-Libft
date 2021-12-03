/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 22:51:50 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 01:13:04 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The memccpy() function copies no more than n bytes from memory area src
**	to memory area dest, stopping when the character c is found.
**
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	if (n == 0)
		dest = 0;
	return (0);
}

/*	The memccpy() function returns a pointer to the next character in dest
**	after c, or NULL if c was not  found in the first n characters of src.
*/