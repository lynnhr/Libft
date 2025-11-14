/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:30 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 11:41:34 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	if (!*l)
		return (b);
	i = 0;
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] == l[j] && i + j < len && l[j] != '\0')
			j++;
		if (l[j] == '\0')
			return (&b[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *big = "Hello world, 42 students!";
//     printf("Test 1: %s\n", ft_strnstr(big, "world", 20));
//     printf("Test 2: %s\n", ft_strnstr(big, "42", 5));     // NULL
//     printf("Test 3: %s\n", ft_strnstr(big, "42", 20));    //42"
//     printf("Test 4: %s\n", ft_strnstr(big, "", 10));      //empty

//     return 0;
// }