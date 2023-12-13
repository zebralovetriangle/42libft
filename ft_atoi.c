/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:05:32 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:10:16 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == 32) || (9 <= nptr[i] && nptr[i] <= 13))
			i++;
	if (('-' == nptr[i] || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (('0' <= nptr[i] && nptr[i] <= '9'))
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = "   -2f5e9w5sss-5-+-2";
    int num = ft_atoi(str);
    int	num_ori = atoi(str);

    printf("the result is: %d\n", num);
    printf("the result of original fuction is: %d\n", num_ori);
    return 0;
}*/
