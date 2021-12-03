/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:14:51 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 12:36:18 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  memcpy()  function copies n bytes from memory area src to memory
**	area dest.  The memory areas must not overlap.
**
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;

	destination = (char *)dest;
	while (n)
	{
		*destination = *(const char *)src;
		destination++;
		src++;
		n--;
	}
	return (dest);
}
