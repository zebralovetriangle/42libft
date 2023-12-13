/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:08:30 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:14:22 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] != (unsigned char)c)
			i --;
		else
		{
			return ((char *)s + i);
		}
	}
	return (NULL);
}

/*
#include <stdio.h>

int     main()
{
        const char      *str = "Hello";

        printf("%s", ft_strrchr(str, 'l'));
}*/
