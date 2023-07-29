/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:10:50 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 01:12:56 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
		str = (char *)ft_calloc(1, sizeof (char));
	else if (len > slen - start)
		str = (char *)ft_calloc((slen - start + 1), sizeof (char));
	else
		str = (char *)ft_calloc((len + 1), sizeof (char));
	if (!str)
		return (NULL);
	while (i < len && start + i < slen && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 4)
		return (write(1, "Error\n", 6));
	str = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	if (!str)
		return (-1);
	printf("|%s|\n", str);
	free(str);
	return (0);
}
