/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:07:21 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-02 09:07:21 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *numElem * size => 0
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc (nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, nmemb * size);
	return (mem);
}
/*#include <stdio.h>

int main()
{
	int	*ptr;
	int	i;

	ptr = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		printf("Salida: %d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/