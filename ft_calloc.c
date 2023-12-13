/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:52:29 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:10:41 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size == 0 || nmemb == 0)
	{
		p = (void *)malloc(0);
		if (!p)
			return (NULL);
		return (p);
	}
	if (nmemb > (SIZE_MAX / size))
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int *ptr;
	
	ptr = calloc (4, sizeof(int));
	if (ptr != NULL)
	{
		printf (" Memory is created successfully \n");
	}
	else
		printf (" Memory is not created ");
	return 0;
}*/
