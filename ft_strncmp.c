/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:19:03 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 14:22:50 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Comparison of two strings, recreation fo the functions strncmp from the
**	manual. Strncmp compares only the first (at most) n bytes of s1 and s2.
**
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				temp_int;

	i = 0;
	temp_int = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			temp_int = ((unsigned char )s1[i] - (unsigned char )s2[i]);
			return (temp_int);
		}
		i++;
	}
	return (temp_int);
}
