/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:21:18 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 17:21:40 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "Error\n", 6));
	ft_putendl_fd(argv[1], ft_atoi(argv[2]));
	return (0);
}*/
