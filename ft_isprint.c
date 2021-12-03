/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:14:00 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/21 22:44:45 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Recreation of isprint function in C library.
**	This functions checkes whether the c is within 32 or 126 ASCII range, and
**	return value is given based on the condition statement. If it is, we return
**	1 (true), and if it is not, we return 0 (false).
*/

int	ft_isprint(int c)
{
	if ((c >= ' ') && (c <= '~'))
		return (1);
	return (0);
}
