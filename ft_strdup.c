/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:22:33 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/03 20:26:16 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen((char *)s1) + 1;
	ptr = (char *) malloc(len * sizeof (char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}

int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	result = ft_strdup(argv[1]);
	if (!result)
		return (-1);
	printf("Mine: %s\n", result);
	free(result);
	result = strdup(argv[1]);
	if (!result)
		return (-1);
	printf("Real: %s\n", result);
	free(result);
	return (0);
}
