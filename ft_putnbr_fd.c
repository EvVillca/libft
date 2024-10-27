/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-03 17:16:23 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-03 17:16:23 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Write de un número*/
void	ft_putnbr_fd(int nb, int fd)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = ((n % 10) + '0');
	ft_putchar_fd(c, fd);
}
#include <stdio.h>

int	main()
{
	int	n = 2147483647;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}