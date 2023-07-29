/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:04:51 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 20:42:33 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		{
			if (s1[i] == s2[i])
				i++;
			else
				return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	size = 10;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	printf("Mine: %d\n", ft_strncmp(argv[1], argv[2], size));
	printf("Real: %d\n", strncmp(argv[1], argv[2], size));
	return (0);
}*/
