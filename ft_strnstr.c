/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:30 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 11:18:51 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return big;
	i = 0;
	while (!*big)
	{
		while (big[i] == little[i])
		{
			if (little [i] == '\0')
				return (&little[i]);
			i++;
		}
		big++;	
	}
	return (NULL);
}