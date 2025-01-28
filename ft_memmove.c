/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:10 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/09 16:06:10 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src && len > 0)
		return (NULL);
	if (dest > src)
	{
		i = len;
		while (i > 0)
		{
			*(char *)(dest + i - 1) = *(char *)(src + i - 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char	src[20] = "42Madrid";
	size_t	n = 5;

	printf("Salida: %s\n", ft_memmove(src + 5, src, n));
	printf("src: %s\n", ft_strlcpy(src + 5, src, n));
	return (0);
}*/