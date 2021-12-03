/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:41:22 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 13:45:56 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Recreating tolower function from the manual, checking if the given int c
**	is within the ASCII range of uppers letter, and if it is, we are
**	adding the value by 32 and turning it into a lowercase letter.
**	If the value is not within the given range we just return c.
**
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
