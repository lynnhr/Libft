/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:26:53 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 14:58:12 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}

//  int main(void)
//  {
// 	char src[6] = "";
// 	char dest[6] = "";
// 	char *result = ft_memcpy(dest, src, 4);
// 	for (int i = 0; i <6; i++)
// 		write(1, &result[i], 1);
// 	return 0 ;	
//  }