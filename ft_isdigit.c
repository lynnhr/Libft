/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:24:00 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 12:32:48 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c1 = 'a';
// 	int c3 = 1;
// 	int c4 = '%';

// 	printf("is '%c' a digit? %d\n", c1, ft_isdigit(c1));
// 	printf("is '%d' a digit? %d\n", c3, ft_isdigit(c3));
// 	printf("is '%c' a digit? %d\n", c4, ft_isdigit(c4));

// 	return 0;
// }