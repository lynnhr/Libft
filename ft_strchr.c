/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:42:34 by marvin            #+#    #+#             */
/*   Updated: 2025/11/15 08:52:10 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	val;

	val = (unsigned char) c;
	while (*s != val)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "yay 42";
// 	char a = 'a';
// 	printf("%s",ft_strchr(s,a));
// }