/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:30:48 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/28 17:29:56 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		ft_putchar_fd(num + '0', fd);
	}
}
/*
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    // Create or open a file for writing
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }

    // Test the ft_putnbr_fd function
    int num1 = 12345;
    int num2 = -6789;

    // Output integers to the file descriptor using ft_putnbr_fd
    ft_putnbr_fd(num1, fd);
    ft_putchar_fd('\n', fd); // Add a newline character
    ft_putnbr_fd(num2, fd);

    close(fd); // Close the file descriptor

    printf("Numbers written to the file 'output.txt'\n");

    return 0;
}
*/
