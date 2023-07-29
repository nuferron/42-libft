/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:32:35 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 20:36:13 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;
	size_t			i;

	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (aux_s1[i] == aux_s2[i])
				i++;
			else
				return (aux_s1[i] - aux_s2[i]);
		}
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	size = 10;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	printf("Mine: %d\n", ft_memcmp(argv[1], argv[2], size));
	printf("Real: %d\n", memcmp(argv[1], argv[2], size));
	return (0);
}*/
