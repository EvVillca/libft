/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:05:32 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/27 18:05:32 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void	my_tolower(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = tolower(*c);
	(void)i;
}

int main()
{
	char fc[] = "HOLA42MANDRIL"; //array modificable [] ohhhh
	ft_striteri(fc, my_tolower);
	printf("%s\n", fc);
	return (0);
}*/