/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:53:20 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:14:45 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	slen;
	size_t	end;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	end = 0;
	if (start > slen)
		return (ft_strdup(""));
	if (start < slen)
		end = slen - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}

/*
#include <stdio.h>
int	main()
{
	char	*str1 = "geeks";
	char	*result = ft_substr(str1, 3, 3);

	printf("the substring is : %s\n", result);
	free(result);
	return(0);
}*/
