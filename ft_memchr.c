/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:36:29 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 18:24:21 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;	

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		else
		{
			str++;
			n--;
		}
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main()
{
	const char *str = "Hello Zebra";
	void *ptr = ft_memchr(str, 'l', strlen(str));
	int	c = 'l';

	if (ptr != NULL)
		printf("%s", (char *)ptr);
	else
		printf("Character '%c' not found.\n", c);	
}*/
