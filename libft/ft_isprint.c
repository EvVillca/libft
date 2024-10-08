/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-25 11:06:10 by evillca-          #+#    #+#             */
/*   Updated: 2024-09-25 11:06:10 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Comprueba que solo se imprimen caracteres imprimibles*/
int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
