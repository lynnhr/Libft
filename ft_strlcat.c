/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:29:59 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 16:23:22 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	d;

	i = 0;
	s = 0;
	d = 0;
	while (dest[d] && d < size)
		d++;
	while (src[s])
		s++;
	if (d == size)
		return (size + s);
	while (src[i] && d + i + 1 < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}
// #include <stdio.h>
// int main()
// {
// 	char *src = "World!";
// 	char dest[20] = "Hello, ";
// 	unsigned int c = ft_strlcat(dest, src, 13);
// 	printf("concatenated ctring: %s\n", dest);
// 	printf("length of string tried to create: %u\n", c);
// 	return 0;
// }