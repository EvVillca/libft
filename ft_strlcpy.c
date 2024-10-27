/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 19:48:13 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-10 19:48:13 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copy src to dst
 * size -1 to leave space for the \0
 * \0 terminated
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	//size_t	len;

	//len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>

int	main()
{
	char	dst[20] = "Hola";
	char	src[20] = " Mundo";
	size_t	size = 20;

	printf("Salida: %zu\n", ft_strlcpy(dst, src, size));
	printf("dest: %s\n", dst);
	return (0);
}*/