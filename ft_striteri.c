/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:18:08 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/24 17:51:12 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
#include <stdio.h>

void print(unsigned int index, char *c)
{
    printf("%d: %c\n", index, *c);
}

int main()
{
    char s[] = "732 is on call";
    ft_striteri(s, print);
    return 0;
}*/
