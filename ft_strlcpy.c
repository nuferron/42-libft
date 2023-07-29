/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:27:53 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/03 20:25:30 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	src[] = "If the world was flooded, it would be easy for the duck";
	char	dst[] = "Think about it. Bullfrog is only one letter away from blue frog.";
	char	ft_dst[] = "Think about it. Bullfrog is only one letter away from blue frog.";
	size_t	result;

	result = ft_strlcpy(ft_dst, src, 25);
	printf("Mine: %zu\t%s\n", result, ft_dst);
	result = strlcpy(dst, src, 25);
	printf("Real: %zu\t%s\n", result, dst);
	return (0);
}*/
