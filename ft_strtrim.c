/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:11:33 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:14:33 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	if (end < start)
	{
		ptr = (char *)malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(end - start + 2);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, start, end - start + 2);
	return (ptr);
}

/*
#include <stdio.h>

int	main()
{
	char	*s1 = "AAWHATADAYAA";
	char	*set = "A";
	char	*result = ft_strtrim(s1, set);

	printf("the result after trimmed is : %s\n", result);
	free (result);
}*/
