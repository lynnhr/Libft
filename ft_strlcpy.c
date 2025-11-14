/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:28:48 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/14 21:05:41 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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