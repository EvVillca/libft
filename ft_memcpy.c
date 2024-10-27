/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 07:41:52 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/02 10:22:40 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * copy n bytes from src to dest, overwrite
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == 0 && s == 0 && n > 0)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char	dest[20] = "Hola Mundo";
	char	src[20] = "42Madrid";
	size_t	n = 5;

	printf("Salida: %s\n", ft_memcpy(dest, src, n));
	printf("dest: %s\n", dest);
	return (0);
}*/