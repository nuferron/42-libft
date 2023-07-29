/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:42:24 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/03 17:53:19 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *) malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return ((void *) ptr);
}

/*int	main(void)
{
	char	*result;
	int		len = 5;
	int		i = 0;

	result = ft_calloc(len, sizeof (char));
	if (!result)
		return (-1);
	while (i < len)
		result[i++] = 'a';
	printf("Mine: %s\n", result);
	free(result);
	result = calloc(len, sizeof (char));
	if (!result)
		return (-1);
	i = 0;
	while (i < len)
		result[i++] = 'b';
	printf("Real: %s\n", result);
	free(result);
	return (0);
}*/
