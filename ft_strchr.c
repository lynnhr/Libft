/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:42:34 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 08:43:11 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "yay 42";
// 	char a = 'a';
// 	printf("%s",ft_strchr(s,a));
// }