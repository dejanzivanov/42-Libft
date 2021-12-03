/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 10:48:54 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 12:28:19 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a string
**	representing the integer received as an argument.
**	Negative numbers must be handled.
*/

static int	ft_int_len(long nbr)
{
	int	counter;

	counter = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		++counter;
	}
	return (counter);
}

static char	*ft_put_str(char *str, int str_len, int n)
{
	if (n < 0)
	{
		str[0] = '-';
		str_len++;
		ft_put_str(str, str_len, n * -1);
	}
	else if (n >= 10)
	{
		ft_put_str(str, str_len - 1, n / 10);
		ft_put_str(str, str_len, n % 10);
	}
	else
	{
		n = n + '0';
		str[str_len] = n;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	long long	n;
	int			int_len;
	char		*str;
	long		negative;

	n = (long long)nb;
	int_len = ft_int_len(n);
	negative = 1;
	if (n < 0)
		negative = 2;
	str = (char *)malloc((int_len + 1 + negative) * sizeof(char));
	if (!str)
		return (0);
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	else
	{
		str = ft_put_str(str, int_len, n);
	}
	str[int_len + negative] = '\0';
	return (str);
}

/*	1) In the first part of the function we are accepting parameter and convert
**	it to long long so we do not encounter any problems with the INT overflow or
**	int range(INT_MIN and INT_MAX).
**
**	2) In the second part we are checking if the value is negative in order to
**	know how much memory to allocate, if the value is negative, we allocate 2
**	memory slots(1 for '-' and 1 for terminating null sign '\0'). If it is not
**	negative then we only use 1, for the null terminating sign.
**
**	3) As a fail safe switch we have check for INT_MIN value, and write that
**	into the string using ft_strlcpy function and we return that pointer.
**
**	4) At the line 79 we are passing parameters to a function, that writes all
**	the number in the str pointer. Function works recursivelly simmilar to
**	ft_putnbr. Division and modulus by 10 are used until we get the last
**	digit, convert it into a character, and then write it into designated spot
**	in pointer. Based on digit value if it is positive or negative starting
**	point is changed from str[0] to str[1].
*/