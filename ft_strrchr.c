/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:34:10 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 22:40:25 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*aux_s;

	aux_s = (char *) s;
	len = ft_strlen(aux_s);
	while (len > 0 && aux_s[len] != (unsigned char)c)
		len--;
	if (aux_s[len] == (unsigned char)c)
		aux_s = &aux_s[len];
	else
		aux_s = NULL;
	return (aux_s);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "Error\n", 6));
	printf("Mine: %s\n", ft_strrchr(argv[1], argv[2][0]));
	printf("Real: %s\n", strrchr(argv[1], argv[2][0]));
	return (0);
}*/
