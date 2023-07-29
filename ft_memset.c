/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:01:49 by nuferron          #+#    #+#             */
/*   Updated: 2023/01/19 20:08:25 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *) b;
	while (i < len)
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	str[] = "Art feeds the soul, so does pizza";
	char	ft_str[] = "Art feeds the soul, so does pizza";

	ft_memset(ft_str, 'm', 27);
	memset(str, 'm', 27);
	printf("Mine: %s\n", ft_str);
	printf("Real: %s\n", str);
}
