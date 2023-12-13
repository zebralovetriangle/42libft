/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:24:13 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:13:09 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*res;

	if (s2 == NULL)
		return ((char *)s1);
	if (s1 == NULL)
		return (NULL);
	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	res = s3;
	while (*s1)
	{
		*s3 = *s1;
		s3 ++;
		s1 ++;
	}
	while (*s2)
	{
		*s3 = *s2;
		s3 ++;
		s2 ++;
	}
	*s3 = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main()
{
	char	*s1 = "Hello";
	char	*s2 = "World";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("result of joining two strings is: %s\n", result);

	free(result);
	return (0);
}*/
