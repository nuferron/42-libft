/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:13:07 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 16:13:51 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "Error\n", 6));
	ft_putchar_fd(argv[1][0], ft_atoi(argv[2]));
	return (0);
}*/
