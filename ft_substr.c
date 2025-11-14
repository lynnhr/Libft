/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:53 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 21:13:56 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"	

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_size;

	if (!s)
		return (NULL);
	str_size = ft_strlen(s);
	if (str_size < start)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > str_size - start)
		len = str_size - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s = "Hello, world!";
//     char *sub;
//     sub = ft_substr(s, 7, 5);
//     printf("%s\n", sub);
//     free(sub);
//     sub = ft_substr(s, 20, 5);
//     printf("%s\n", sub);
//     free(sub);
//     return 0;
// }