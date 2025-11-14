/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:29:05 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/14 10:19:35 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1="hello";
// 	char *s2 = "hello";
// 	size_t c = 6;
// 	int a = ft_strncmp(s1, s2, c);
// 	printf("%d", a);
// }