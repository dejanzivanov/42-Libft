/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 13:20:21 by dzivanov          #+#    #+#             */
/*   Updated: 2021/06/04 16:34:28 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	This is recreation of the atoi function in C. We take string of characters
**	that are supposed to be a number converted into an int. According to the man
**	"The atoi function converts the initial portion of the string point to
**	by str to int representation."
**
*/

int	ft_atoi(const char	*str)
{
	unsigned int	int_i;
	long			negat;
	long			score;

	int_i = 0;
	negat = 1;
	score = 0;
	while ((str[int_i] >= 9 && str[int_i] <= 13) || str[int_i] == 32)
		int_i++;
	if (str[int_i] == '-')
	{
		negat = -1;
		int_i++;
	}
	else if (str[int_i] == '+')
		int_i++;
	while (str[int_i] != '\0' && (str[int_i] >= '0' && str[int_i] <= '9'))
	{
		score = (score * 10) + (str[int_i] - 48);
		int_i++;
	}
	return ((int)score * negat);
}

/*
**	1) First part of the function starts with the three variables that will
**	hold our value to be returned even if they are long, result in the end
**	is casted to int so we can cover all aspects of integer range.
**
**	2) Once we are done checking for white spacing, we are checking for - or +
**	signs so we know what we need to multiply our result with accordingly.
**
**	3) For the first character resultat is always set currently at 0. We
**	multiply it by 1- to get the digitcal placement where it should be.
**	Afterwards we do the ascii conversion to its numberical value, we then start
**	our loop again, and continue until we hit a character that is not a number.
**
**	In the end we return score value that is muplitplied by the negative result,
**	which can be positive or negative. And the last but not least, we have
**	integer cast type so the equation can be converted to in and be returned as.
**
**
**
**
**

*/