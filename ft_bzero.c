/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:17:27 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/03 17:31:06 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = s;
	while (i < n)
	{
		aux[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "One dog barks at something, the rest barks at him";
	char	ft_str[] = "One dog barks at something, the rest barks at him";
	int		len;
	int		i;

	len = ft_strlen(str);
	ft_bzero(ft_str, 28);
	bzero(str, 28);
	i = 0;
	write(1, "Mine: ", 6);
	while (i < len)
	{
		if (ft_str[i] != '\0')
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	write(1, "\nReal: ", 7);
	while (i < len)
	{
		if (str[i] != '\0')
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
