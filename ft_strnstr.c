/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:20:34 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/26 17:20:34 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * haystack string -> SRC
 * needle -> SUBSTRING search in the haystack string
 * *needle == 0 <-> !*needle
 * !! len -> maximum characters to search in the *haystack*
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (j == needle_len - 1)
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
