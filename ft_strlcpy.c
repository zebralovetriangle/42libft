/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:35 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/29 12:13:42 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_src;

	i = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	if (size != 0)
	{
		while (src[i] != '\0' && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length_src);
}
/*
#include <stdio.h>
// Assume ft_strlcpy is defined here as per the previous discussions

int main() {
    char src[] = "Sample source";
    char dst[20];
    size_t copied;
 
    // Clear the destination buffer
    for (size_t i = 0; i < sizeof(dst); ++i) {
        dst[i] = '\0';
    }

    // Call ft_strlcpy and store the result
    copied = ft_strlcpy(dst, src, sizeof(dst));
    // Output the results
    printf("Source: '%s'\n", src);
    printf("Destination after strlcpy: '%s'\n", dst);
    printf("Number of characters copied: %zu\n", copied);

    // Now let's try with a smaller buffer size than the source string.
    char smallDst[5];
    copied = ft_strlcpy(smallDst, src, sizeof(smallDst));

    // Output the results
    printf("Source: '%s'\n", src);
    printf("Destination after strlcpy with smaller buffer: '%s'\n", smallDst);
    printf("Number of characters that would have been copied: %zu\n", copied);

    return 0;
}*/
