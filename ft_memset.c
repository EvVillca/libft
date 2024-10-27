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

/*
 * Fill the first n bytes to s with byte c
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}
#include <stdio.h>

int	main()
{
	char	str[20] = "Hola Mundo";
	int		c = 'z';
	size_t	n = 5;

	printf("Salida: %s\n", ft_memset(str, c, n));
	return (0);
}