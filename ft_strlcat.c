/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:18:46 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:13:19 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	save;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	save = i;
	j = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (save + ft_strlen(src));
}

/*
#include <stdio.h>

int	main()
{
	char dst[30] = "hello";
	const char src[] = "yes";
	size_t result;

	printf("before\ndst: %s\nsrc: %s\n", dst, src);
	result = ft_strlcat(dst, src, 40);
	printf("after strlcat\ndst: %s\nsrc: %s\n", dst, src);
	printf("result: %zu\n", result);
}*/
