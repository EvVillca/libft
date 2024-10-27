/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:06:48 by evillca-          #+#    #+#             */
/*   Updated: 2024/10/27 17:06:48 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nums_len(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n > 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*res;
	int			i;

	num = n;
	i = nums_len((long int) n);
	res = (char *) malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	if (num < 0)
	{
		*res = '-';
		num *= -1;
	}
	if (num == 0)
		*res = '0';
	while (num > 0)
	{
		res[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
/*#include <stdio.h>

int main()
{
	char *fc = ft_itoa(-34);
	printf("%s\n", fc);
	return (0);
}*/