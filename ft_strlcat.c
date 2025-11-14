/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:29:59 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/14 21:02:49 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
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