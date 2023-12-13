/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:11:46 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:11:51 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *) src;
	if (n == 0)
		return (dest);
	while (n > 0)
	{
		*p_dest = *p_src;
		p_dest ++;
		p_src ++;
		n --;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	char src[] = "Hungry me";
	char dest[25];

	printf("Before memcpy: \nSrc : %s\nDest: (empty)\n\n", src);
	ft_memcpy(dest, src, sizeof(src));
	printf("After memcpy: \nSrc :%s\nDest: %s\n", src, dest);

	return (0);
}*/