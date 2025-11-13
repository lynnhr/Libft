/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:27:31 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 13:57:10 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "";

// 	printf("Length of '%s' is %d\n", str1, ft_strlen(str1));
// 	printf("Length of '%s' is %d\n", str2, ft_strlen(str2));

// 	return 0;
// }