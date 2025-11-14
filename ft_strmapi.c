/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:19 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 22:46:57 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// char examplef(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return c - 32; 
//     return c;
// }
// int main(void)
// {
//     char *s = "hello world";
//     char *res = ft_strmapi(s, examplef);
//     if (res)
//     {
//         printf("%s\n", res);
//         free(res);
//     }
//     return 0;
// }