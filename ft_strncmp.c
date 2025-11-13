/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:29:05 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/13 11:32:57 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

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

// int main(void)
// {
// 	char *s1="hello";
// 	char *s2 = "hello0";
// 	int a = ft_strncmp(s1, s2, 6);
// 	printf("%d", a);
// }