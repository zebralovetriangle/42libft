/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:17:50 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 20:10:39 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0' || !little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && big[i + j] == little[j]
			&& i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main()
{
	const char	*str1 = "Out to the world";
	const char	*str2 = "to";
	size_t	len = 40;
	char	*result = ft_strnstr(str1, str2, len);

	printf("%s", result);
}*/
