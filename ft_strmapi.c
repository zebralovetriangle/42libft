/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:06:44 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 19:56:23 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char	ft_uppercase(unsigned int i, char c)
{
	if(isalpha(c))
	{
		if (i % 2 == 0)
			return (toupper(c));
		else
			return (tolower(c));
	}
	return (c);
}

int	main()
{
	char	*result = ft_strmapi("Hello World!", ft_uppercase);
	printf("The result is successfully allocated : %s\n", result);
	if (!result)
	{
		printf("The result fails to allocate.\n");
	}
	free(result);
}*/
