/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 07:40:00 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/03 18:20:38 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*_
 * n is the number of bytes to be set to zero
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)s++ = 0;
		i++;
	}
}
/*#include <stdio.h>

int	main()
{
	char	str[10] = "123456789";
	ft_bzero(str, 5);
	printf("Salida: %s\n", str);
	return (0);
}*/