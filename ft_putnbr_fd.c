/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 19:16:09 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 12:52:20 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	This functions works recursivelly accepting two parameters, integer, and
**	file descriptor. As a failsafe switch, we have first IF for INT_MIN value.
**
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n = n + '0';
		write(fd, &n, 1);
	}
}

/*
**	Integer is getting divided and moduled by 10, when we are down to single
**	digit, we convert it to a character, and write it in passed file descriptor
**	using memory address of variable
*/