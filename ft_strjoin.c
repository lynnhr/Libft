/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:04 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 21:21:22 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc(sizeof(char) * len);
	if (!p)
		return (NULL);
	i = 0;
	while (*s1)
		p[i++] = *s1++;
	while (*s2)
		p[i++] = *s2++;
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
//     char *joined = ft_strjoin("Hello, ", "world!");
//     if (joined)
//     {
//         printf("%s\n", joined);
//         free(joined);
//     }
//     return 0;
// }