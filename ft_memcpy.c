/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:34:31 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 20:44:58 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dst;
	size_t			i;

	aux_src = (unsigned char *) src;
	aux_dst = (unsigned char *) dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "It's-a me, Mario!";
	char	dst[] = "My name is Marcus Decimus Meridius";
	char	ft_dst[] = "My name is Marcus Decimus Meridius";

	ft_memcpy(ft_dst, src, 10);
	memcpy(dst, src, 10);
	printf("%s\nMine: %s\nReal: %s\n", src, ft_dst, dst);
	return (0);
}*/
