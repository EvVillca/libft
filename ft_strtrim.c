/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:18:54 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/27 16:18:54 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * first ocurrence
 * last ocurrence
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len_end;
	char	*str;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	len_end = end - start;
	str = (char *)malloc(sizeof(char) * (len_end + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len_end + 1);
	return (str);
}

/*#include <stdio.h>
int main()
{
	char *fc = ft_strtrim("Hola42Domingo", "oH");
	printf("%s\n", fc);
	return (0);
}*/