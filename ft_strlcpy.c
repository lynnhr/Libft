/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:28:48 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 16:11:22 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
	{
		c++;
	}
	if (size == 0)
	{
		return (c);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}
// #include <stdio.h>
// int main()
// {
// 	char *src = "Hello, World!";
// 	char dest[20];
// 	int c = ft_strlcpy(dest, src, 6);
// 	printf("copied String: %s\n", dest);
// 	printf("length of source: %d\n", c);
// 	return 0;
// }