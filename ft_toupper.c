/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:26:20 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:15:09 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int	main()
{
	int	c = 'W';
	
	printf("%c", ft_toupper(c));
}*/
