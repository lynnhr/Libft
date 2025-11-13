/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:33:39 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 12:00:15 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"


int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	char c1 = 'a';
	char c2 = 'Z';
	char c3 = '1';
	char c4 = '%';

	printf("Is '%c' an alphabetic character? %d\n", c1, ft_isalpha(testChar1));
	printf("Is '%c' an alphabetic character? %d\n", c2, ft_isalpha(testChar2));
	printf("Is '%c' an alphabetic character? %d\n", c3, ft_isalpha(testChar3));
	printf("Is '%c' an alphabetic character? %d\n", c4, ft_isalpha(testChar4));

	return 0;
}











