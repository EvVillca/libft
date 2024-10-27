/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:20:21 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/26 17:20:21 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
 * Compares the first n or until '\0'
 * 0 if equal
 * 1 if s1 > s2
 * -1 if s1 < s2
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main()
{
	char	*s1 = "Hola Mundo";
	//char	*s2 = "Hola Mundo"; // 0
	char	*s2 = "Hola 4Mundo"; // 25
	size_t	n = 8;

	printf("Salida: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/