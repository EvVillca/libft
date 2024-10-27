/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:29:05 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/22 16:29:05 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * return = dest_len + src_len
*/
size_t 	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;


	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	j = 0;
	//if (size == 0)
	//	return (src_len);
	if (size <= dest_len)
		return (src_len + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>

int	main()
{
	char	dest[20] = "Hola";
	char	src[20] = " Mundo";
	size_t	size = 20;

	printf("Salida: %zu\n", ft_strlcat(dest, src, size));
	printf("dest: %s\n", dest);
	return (0);
}*/