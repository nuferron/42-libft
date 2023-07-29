/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:41:25 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 21:05:00 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux_src;
	unsigned char	*aux_dst;

	aux_src = (unsigned char *)src;
	aux_dst = (unsigned char *)dst;
	if (!len || (!dst && !src))
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			aux_dst[len - 1] = aux_src[len -1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

int	main(void)
{
	char	src[] = "It's-a me, Mario!";
	char	dst[] = "My name is Marcus Decimus Meridius";
	char	ft_dst[] = "My name is Marcus Decimus Meridius";

	ft_memmove(ft_dst, src, 10);
	memmove(dst, src, 10);
	printf("%s\nMine: %s\nReal: %s\n", src, ft_dst, dst);
	return (0);
}
