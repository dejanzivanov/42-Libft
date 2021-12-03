/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:14:54 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 14:16:55 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This functions works the same way as strchr, but only in reverese orer
**
**
*/

char	*ft_strrchr(const char *str, int c)
{
	char		*temp;
	size_t		i;

	temp = (char *)str;
	i = ft_strlen(str);
	if ((char )c == '\0')
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (temp[i] == c)
			return (&temp[i]);
	}
	return (0);
}
