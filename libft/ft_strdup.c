/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 10:01:40 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-02 10:01:40 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*duplica string malloc*/
char	*ft_strdup(const char *s)
{
	char	*mem;
	int		tam;

	tam = ft_strlen((char *)s);
	mem = malloc(sizeof(char) * tam + 1);
	if (mem == NULL)
		return (NULL);
	ft_memcpy(mem, s, tam);
	return (mem);
}
