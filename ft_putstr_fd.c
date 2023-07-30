/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:17:19 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 16:57:26 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "Error\n", 6));
	ft_putstr_fd(argv[1], ft_atoi(argv[2]));
	return (0);
}*/
