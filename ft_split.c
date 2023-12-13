/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:33:00 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 16:01:39 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count += 1;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**copy(int countword, char **dest, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[j] && i < countword)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		dest[i] = ft_substr(s, start, j - start);
		if (!dest[i])
		{
			while (i-- >= 0)
				free(dest[i]);
			free(dest);
			return (NULL);
		}
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		countword;
	char	**dest;

	if (s == NULL)
		return (NULL);
	countword = count(s, c);
	dest = malloc(sizeof (char *) * (countword + 1));
	if (!dest)
		return (NULL);
	dest = copy(countword, dest, s, c);
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	int i = 0;
  	char *s = "Hello World";
  	char c = 'o';
  	char **result = ft_split(s, c);

    	if(result)
    	{
        	while (result[i] != NULL)
        	{
            	printf("%s\n", result[i]);
            	i++;
        	}
        	i = 0;
        	while(result[i] != NULL)
        	{
            		free (result[i]);
            		i++;
       		}
        	free(result);
    	}
    	return (0);
}*/