/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:10:21 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/20 18:20:24 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	//for non-printable characters tou can use $(echo -e '\x01\x02\x03\x04')
	int	i;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (ft_isprint(argv[1][i]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			return (write(1, " is not printable\n", 18));
		}
	}
	return (write(1, "There are only printable characters\n", 36));
}*/
