/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 18:09:32 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/02 08:48:36 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Rellena de n caracteres c en s*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i > n)
	{
		*(unsigned char *)s++ = c;
		i++;
	}
	return (s);
}
