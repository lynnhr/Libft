/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:27:15 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 13:54:28 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("ft_isprint('A') = %d\n", ft_isprint('A'));
//     printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
//     printf("ft_isprint('~') = %d\n", ft_isprint('~'));
//     printf("ft_isprint(31) = %d\n", ft_isprint(31));
//     printf("ft_isprint(127) = %d\n", ft_isprint(127));
//     printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
//     return 0;
// }