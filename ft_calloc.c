/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:40:01 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 20:17:17 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
		return (malloc(1));
	total = count * size;
	if (count > SIZE_MAX / size)
		return (0);
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, total);
	return (ptr);
}
