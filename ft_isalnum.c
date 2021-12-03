/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:01:07 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/21 22:30:03 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Recreation of the isalnum function. This functions checks whether character
**	is alphabetcal or numberical. And that is done by using ft_isalpha and
**	ft_isdigit function. If the character is within ASCII it is proven true.
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
**	Then we return value 1. If the expression is false, we return the (0).
*/