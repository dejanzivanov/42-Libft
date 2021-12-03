/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:56:55 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/21 23:48:58 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Recreation of is_ascii value function. Return value is not specified in the
**	manual, this implementation returns 1 if C is in range of 0 and octal 0177
**	inclusive, and 0 if it is not. Octal value of 127 is 0177. This function
**	returns 0 (calse) if the c is in the extended range range of ASCII 127+ .
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
