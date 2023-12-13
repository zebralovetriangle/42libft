/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:05:10 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 16:53:12 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len = 1;
	}
	if (n == 0)
		len = 1;
	else
	{
		while (n)
		{
			n /= 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				is_negative;
	int long		num;
	size_t			len;
	char			*result;

	len = numlen((int long)n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	num = (int long)n;
	is_negative = 0;
	if (num < 0)
	{
		num = num * (-1);
		result[0] = '-';
		is_negative = 1;
	}
	result[len] = '\0';
	while (len > (size_t)is_negative)
	{
		result[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int a = -2147483648;
	char *result;

	result = ft_itoa(a);
	
	printf("%s\n", result);
	free(result);
}*/
