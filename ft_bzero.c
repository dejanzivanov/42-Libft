/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 23:29:23 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 00:35:03 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Recreation of the bzero function from man. According to the man page, this
**	functions erases the data in the n bytes of memory starting at the location,
**	pointed py s, by writing zeros(bytes containing '\0'). I see that I could
**	have used ft_memset here now, but let that be a lesson to a future you Deki!
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr + i) = '\0';
		i++;
	}
}
