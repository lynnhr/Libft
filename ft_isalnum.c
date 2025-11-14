/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:24:19 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 13:23:30 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

// #include <stdio.h>
// int main(void)
// {
//     char c1 = 'a';
//     char c2 = 'Z';
//     char c3 = '1';
//     char c4 = '%';

//     printf(" '%c' returns %d\n", c1, ft_isalnum(c1));
//     printf("'%c' returns %d\n", c2, ft_isalnum(c2));
//     printf("'%c' returns %d\n", c3, ft_isalnum(c3));
//     printf(" '%c' returns %d\n", c4, ft_isalnum(c4));

//     return 0;
// }