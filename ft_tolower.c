/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:18:18 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 21:39:22 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		c = c + 32;
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
		result = ft_tolower(argv[1][i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\nReal: ", 7);
	i = 0;
	while (argv[1][i] != '\0')
	{
		result = tolower(argv[1][i]);
		write(1, &result, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
