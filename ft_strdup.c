/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaydar <lhaydar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:42:43 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 12:06:49 by lhaydar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = malloc (sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

//#include <stdio.h>
// int main(void)
// {
//     char *s1 = "Hello 42!";
//     char *s2 = "";
//     char *dup1 = ft_strdup(s1);
//     char *dup2 = ft_strdup(s2);
//     printf("original: %s\nduplicate: %s\n\n", s1, dup1);
//     printf("original: '%s'\nduplicate: '%s'\n\n", s2, dup2);
//     free(dup1);
//     free(dup2);
//     return 0;
// }