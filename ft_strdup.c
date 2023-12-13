/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:05:28 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:12:48 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
/*
#include <stdio.h>

int	main()
{
	char	*str = "Good";
	char	*result = ft_strdup(str);
	char	*ori_result = strdup(str);

	if (result == NULL)
		return (1);

	printf("original : %s\n", str);
	printf("copy result : %s\n", result);
	printf("original function's result : %s\n", ori_result);

	free(result);
	return (0);
}*/
