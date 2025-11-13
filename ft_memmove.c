/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:41:20 by marvin            #+#    #+#             */
/*   Updated: 2025/11/13 15:34:20 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     // dest > src 
//     char buffer1[20] = "Hello, World!";
//     ft_memmove(buffer1 + 7, buffer1, 6); // move "Hello," to position 7
//     printf("Case 1: %s\n", buffer1);

//     // dest < src 
//     char buffer2[20] = "Hello, World!";
//     ft_memmove(buffer2, buffer2 + 7, 6); // move "World!" to position 0
//     printf("Case 2: %s\n", buffer2);

//     return 0;
// }