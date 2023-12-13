/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:28 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:12:04 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *) dest;
	b = (const unsigned char *) src;
	if ((a == b) || (n == 0))
		return (dest);
	if (b < a && b + n > a)
	{
		while (n--)
			a[n] = b[n];
	}
	else
	{
		while (n--)
		{
			*a = *b;
			a++;
			b++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = "Unbelievable";
	char dest[30] = "OHHHH";

	printf("Before memmove: \nSrc: %s\nDest: %s\n\n",src, dest);
	ft_memmove(dest, src, sizeof(src));
	printf("After memmove: \nSrc: %s\nDest: %s\n\n", src, dest);
	memmove(dest, src, sizeof(src));
	printf("memmove officielle: \n Src: %s\nDest: %s\n\n", src, dest);
	return(0);
}*/
