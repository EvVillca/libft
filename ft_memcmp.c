/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 14:19:47 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-07 14:19:47 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 *Compare the first n bytes of the string s1 and s2
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main()
{
	char	s1[20] = "Hola Mundo";
	char	s2[20] = "Hola Mondo";
	//size_t	n = 10; // 6
	size_t	n = 5; 

	printf("Salida: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/