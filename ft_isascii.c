/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:55:56 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/20 18:20:01 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	int	i;
	//for non-ascii characters you can use: 日本人
	if (argc != 2)
		return (write(1, "Error\n", 6));
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (ft_isascii(argv[1][i]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			return (write(1, " is not ascii\n", 14));
		}
	}
	return (write(1, "There are only ascii characters\n", 32));
}*/
