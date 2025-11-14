/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:40:01 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 12:12:58 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
		return ;
	
}

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr;
// 	size_t	total_size;

// 	if (count == 0 || size == 0)
// 		return (malloc(1));
// 	total_size = count * size;
// 	if (count > SIZE_MAX / size)
// 		return (0);
// 	ptr = malloc(total_size);
// 	if (!ptr)
// 		return (0);
// 	ft_memset(ptr, 0, total_size);
// 	return (ptr);
// }