/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:40:43 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 22:59:00 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	countd(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*rev(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long		l;

	l = n;
	i = countd(l);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (rev(str, l, i));
}

// #include <stdio.h>
// int main(void)
// {
//     char *s;

//     s = ft_itoa(1234);
//     printf("%s\n", s);
//     free(s);

//     s = ft_itoa(-5678);
//     printf("%s\n", s);
//     free(s);

//     s = ft_itoa(0);
//     printf("%s\n", s);
//     free(s);

//     s = ft_itoa(-2147483648); 
//     printf("%s\n", s);
//     free(s);

//     return 0;
// }