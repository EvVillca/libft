/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:44:11 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/25 10:44:11 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first occurrence
 * Locate \0
 * NULL if not found
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}
#include <stdio.h>

int	main()
{
	char	*str = "Hola Mundo";
	int		c = 'o';

	printf("Salida: %s\n", ft_strchr(str, c));
	return (0);
}