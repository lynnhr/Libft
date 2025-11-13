/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:34:40 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 16:15:39 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);	
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);

void	*ft_memchr(const void *s, int c, size_t n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_tolower(int c);
int	ft_toupper(int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str);


#endif