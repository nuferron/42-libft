/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 23:29:06 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/05 13:53:45 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tlen;
	int		i;
	char	*result;

	tlen = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	i = 0;
	result = (char *) malloc(sizeof(char) * tlen + 1);
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (i <= tlen)
	{
		result[tlen] = s2[tlen - i];
		tlen--;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	str = ft_strjoin(argv[1], argv[2]);
	if (!str)
		return (-1);
	printf("|%s|\n", str);
	free(str);
	return (0);
}*/
