/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:59:13 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/20 18:19:25 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
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
		if (ft_isdigit(argv[1][i]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			return (write(1, " is not a number\n", 17));
		}
	}
	return (write(1, "There are only numbers\n", 23));
}*/
