/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:10:02 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:10:28 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)s;
	while (n > 0)
	{
		*dest = 0;
		dest++;
		n--;
	}
}
/*
#include <stdio.h>

int	main()
{
	char buffer[10];
	size_t i = 0;

	ft_bzero(buffer, sizeof(buffer));

	while(i < sizeof(buffer))
	{
		if ((buffer[i] != 0))
			return (1);
		i++;
	}

	printf("%d", buffer[i]);
	return (0);
}*/
