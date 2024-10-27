/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:03:26 by evillca-          #+#    #+#             */
/*   Updated: 2024-10-02 09:03:26 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Contamos el número de PLBs, para el tam del array*/
static int	count_words(char const *s, char c)
{
	int	i;
	int	words;
	int	control;

	i = 0;
	words = 0;
	control = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			control = 0;
		}
		else if (control == 0)
		{
			control++;
			words++;
		}
		i++;
	}
	return (words);
}

/*Devuelve el num de letras de la PLB hasta el delimitador */
static int	len_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

/*Libera memoria, de todas hasta donde falló. Con i para no desplar ptr*/
static void	free_split(char **s, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free(s[i++]);
}

/*Crea los arrays con sus tamaños de lo delimitado*/
static void	aux_split(char const *s, char c, char **strings)
{
	int	i;
	int	k;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			continue ;
		strings[i] = malloc(sizeof(char) * len_word(s, c) + 1);
		if (strings[i] == NULL)
			free_split(strings, i);
		k = 0;
		while (*s != c && *s)
		{
			strings[i][k] = *s;
			k++;
			s++;
		}
		strings[i][k] = '\0';
		i++;
	}
	strings[i] = NULL;
}

/*Devuelve un array de strings, separado por el delimitador*/
char	**ft_split(char const *s, char c)
{
	char	**strings;

	strings = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	aux_split(s, c, strings);
	return (strings);
}
