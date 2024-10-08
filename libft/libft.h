/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evillca- <evillca-@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-25 08:45:24 by evillca-          #+#    #+#             */
/*   Updated: 2024-09-25 08:45:24 by evillca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

int 	ft_toupper(int c);
int 	ft_tolower(int c);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

char	**ft_split(char const *s, char c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

typedef struct  s_list
{
void    *content;
struct  s_list *next;
}       t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);

#endif
