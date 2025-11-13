/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:24:36 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 13:42:08 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("ft_isascii('A') = %d\n", ft_isascii('A'));
//     printf("ft_isascii('z') = %d\n", ft_isascii('z'));
//     printf("ft_isascii('0') = %d\n", ft_isascii('0'));
//     printf("ft_isascii(' ') = %d\n", ft_isascii(' '));
// 	 printf("ft_isascii(' ') = %d\n", ft_isascii(128));
//     return 0;
// }