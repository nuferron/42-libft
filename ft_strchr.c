/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:54:46 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/19 22:38:50 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*bookmark;
	int		i;
	char	*aux_s;

	aux_s = (char *) s;
	i = 0;
	while (aux_s[i] != '\0' && aux_s[i] != (unsigned char)c)
		i++;
	if ((unsigned char)c != '\0' && aux_s[i] == '\0')
		bookmark = NULL;
	else
		bookmark = &aux_s[i];
	return (bookmark);
}

/*int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "Error\n", 6));
	printf("Mine: %s\n", ft_strchr(argv[1], argv[2][0]));
	printf("Real: %s\n", strchr(argv[1], argv[2][0]));
	return (0);
}*/
