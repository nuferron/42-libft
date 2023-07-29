/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:08:53 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 20:37:16 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *) s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (aux[i] == (unsigned char) c)
			{
				aux = &aux[i];
				return ((void *) aux);
			}
			else
				i++;
		}
	}
	aux = NULL;
	return ((void *) aux);
}

/*int	main(int argc, char **argv)
{
	int	size = 10;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	printf("Mine: %s\n", ft_memchr(argv[1], argv[2][0], size));
	printf("Mine: %s\n", ft_memchr(argv[1], argv[2][0], size));
	return (0);
}*/
