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
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
		return (dest);

	if (dest < src)
	{
		// No hay superposición o el destino está antes que la fuente en memoria
		memcpy(dest, src, n);
	}
	else
	{
		// Hay superposición: copiamos los datos primero a un buffer temporal
		unsigned char *temp = (unsigned char *)malloc(n);
		if (temp == NULL)
			return (NULL);  // Manejo de error si falla malloc

		memcpy(temp, src, n);   // Copiamos a un buffer temporal
		memcpy(dest, temp, n);  // Copiamos del buffer al destino
		free(temp);             // Liberamos el buffer temporal
	}
	return (dest);
}

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	
	if (dest == src || n == 0)
		return (dest);

	if (dest < src)
	{
		// No hay superposición: copiar normalmente hacia adelante
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		// Hay superposición: copiar desde atrás hacia adelante
		dest_ptr += n;
		src_ptr += n;
		while (n--)
			*--dest_ptr = *--src_ptr;
	}

	return (dest);
}
