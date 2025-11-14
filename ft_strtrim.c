/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:46 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 21:36:20 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s1 = "  \tHello, world!  \n";
//     char *set = " \t\n";
//     char *trimmed = ft_strtrim(s1, set);
//     if (trimmed)
//     {
//         printf("original: '%s'\n", s1);
//         printf("trimmed: '%s'\n", trimmed);
//         free(trimmed);
//     }
//     return 0;
// }