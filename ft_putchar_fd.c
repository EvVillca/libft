/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-03 16:22:18 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-03 16:22:18 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*envía C al descriptor de fichero especificado*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
