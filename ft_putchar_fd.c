/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 18:51:47 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 12:43:36 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This functions works exactly same as ft_putchar function, except that this
**	function requires file descriptore, where to write the output.
**
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*	There are 3 possible options to choose from file descriptor and they are
**	0(standard input), 1(standard output), 2(standard error) . In this case
**	instead of just using 1 as standard output for ft_putchar, we pass the
**	parameter int fd to write function as first parameter to write.
*/