/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:42:25 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 22:20:26 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			wc++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wc);
}

char	*copyw(char const *s, int start, int end)
{
	char	*p;
	int		i;

	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

static void	free_all(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill(char **arr, char const *s, char c, int j)
{
	int	beg;
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			beg = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = copyw(s, beg, i);
			if (!arr[j])
				return (-1);
			j++;
		}
	}
	arr[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wc;

	if (!s)
		return (NULL);
	wc = count(s, c);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	if (fill(arr, s, c, 0) == -1)
	{
		free_all(arr, count(s, c));
		return (NULL);
	}
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s = "Hello,,world,this,is,C";
//     char c = ',';
//     char **res = ft_split(s, c);
//     if (!res)
//     {
//         printf("ft_split returned NULL\n");
//         return 1;
//     }
//     printf("split result:\n");
//     for (int i = 0; res[i]; i++)
//         printf("[%d]: '%s'\n", i, res[i]);

//     for (int i = 0; res[i]; i++)
//         free(res[i]);
//     free(res);
//     return 0;
// }