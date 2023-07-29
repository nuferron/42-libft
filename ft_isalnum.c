/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:23:35 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/14 18:44:54 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (ft_isalnum(argv[1][i]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			return (write(1, " is not alphanumeric\n", 21));
		}
	}
	return (write(1, "There are only alphanumeric characters\n", 39));
}*/
