/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:30:52 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/14 18:42:58 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
		if (ft_isalpha(argv[1][i]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			return (write(1, " is not a letter\n", 17));
		}
	}
	return (write(1, "There are only letters\n", 23));
}*/
