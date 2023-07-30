/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:35:13 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 15:52:08 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_random(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_tolower(*c);
	else
		*c = ft_toupper(*c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "Error\n", 6));
	ft_striteri(argv[1], ft_random);
	printf("|%s|\n", argv[1]);
	return (0);
}*/
