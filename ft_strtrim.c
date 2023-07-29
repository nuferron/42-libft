/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:36:56 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/21 21:18:39 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcmp(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (1);
		else
			j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		r;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	r = 0;
	while (s1[start] != '\0' && ft_charcmp(s1[start], set) == 1)
		start++;
	while (end > start && ft_charcmp(s1[end - 1], set) == 1)
		end--;
	result = (char *)ft_calloc((end - start + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (start < end)
		result[r++] = s1[start++];
	return (result);
}

/*int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	str = ft_strtrim(argv[1], argv[2]);
	if (!str)
		return (-1);
	printf("|%s|\n", str);
	free(str);
	return (0);
}*/
