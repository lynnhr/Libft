/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:13:09 by lhaydar           #+#    #+#             */
/*   Updated: 2025/11/01 18:25:12 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while(i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	s = ptr;
}


int main(void)
{
    char buffer[8];
	ft_bzero(buffer, 6);
	for(int i = 0; i< 6 ; i++)
		write(1, &buffer[i], 1);
}
