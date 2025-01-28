/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 14:31:50 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-07 14:31:50 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *Search for the first occurrence of the character c in the 
 * first n bytes of the string s
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (*(unsigned char *)(s) == (unsigned char)c)
			return ((void *)(s));
		s++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main()
{
	char	s[20] = "Hola Mundo";
	int		c = 'M';
	size_t	n = 10;

	printf("Salida: %s\n", ft_memchr(s, c, n));
	return (0);
}*/