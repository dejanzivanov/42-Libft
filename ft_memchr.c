/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 00:22:52 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 01:13:34 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The  memchr()  function  scans  the  initial n bytes of the memory area
**	pointed to by s for the first instance of c. Both c and the bytes of the
**	memory area pointed to by s are interpreted as unsigned char.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*target;
	size_t			i;

	target = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (target[i] == (unsigned char)c)
		{
			return ((unsigned char *) &target[i]);
		}
		i++;
	}
	return (0);
}

/*
**	1) Itterating through the initial size of the bytes pointed by the s pointer
**	while they are typecasted as unsigned char and returning the portion of the
**	byte memory where the character is found.
*/
