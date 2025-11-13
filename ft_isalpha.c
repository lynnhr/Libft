/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:33:39 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 13:08:32 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c1 = 'a';
// 	char c2 = 'Z';
// 	char c3 = '1';
// 	char c4 = '%';

// 	printf("is '%c' an alphabet? %d\n", c1, ft_isalpha(c1));
// 	printf("is '%c' an alphabet? %d\n", c2, ft_isalpha(c2));
// 	printf("is '%c' an alphabet? %d\n", c3, ft_isalpha(c3));
// 	printf("is '%c' an alphabet? %d\n", c4, ft_isalpha(c4));

// 	return 0;
// }