/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:50:15 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/25 11:50:15 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the last occurrence
 * NULL if not found
 * &s[i] == (char *) s
 * return: pointer to the located character
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
#include <stdio.h>

/*int	main()
{
	char	*str = "Hola Mundo";
	int		c = 'd';

	printf("Salida: %s\n", ft_strrchr(str, c));
	return (0);
}*/