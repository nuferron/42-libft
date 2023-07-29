/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:52:02 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 21:40:18 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int	main(int argc, char **argv)
{
	int		i;
	char	result;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	write(1, "Mine: ", 6);
	i = 0;
	while (argv[1][i] != '\0')
	{
		result = ft_toupper(argv[1][i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\nReal: ", 7);
	i = 0;
	while (argv[1][i] != '\0')
	{
		result = toupper(argv[1][i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
