/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:32:39 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 22:37:30 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen((char *) src));
	else
	{
		i = 0;
		while (i < (dstsize - dstlen - 1) && src[i])
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}

/*int	main(void)
{
	char	src[50] = " if you don't have fools too.";
	char	ft_dst[50] = "You can't have wise folks";
	char	dst[50] = "You can't have wise folks";
	size_t		result;

	result = ft_strlcat(ft_dst, src, 44);
	printf("Mine: %zu\t%s\n", result, ft_dst);
	result = strlcat(dst, src, 44);
	printf("Real: %zu\t%s\n", result, dst);
	return (0);
}*/
