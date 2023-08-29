/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:57:06 by nuferron          #+#    #+#             */
/*   Updated: 2023/02/21 21:18:27 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!s)
		return (-2);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

static char	*ft_putword(char const *s, int start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc((len + 1), sizeof (char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	return (word);
}

static char	**ft_malloc_protection(char **result, int nwords)
{
	int	i;

	i = 0;
	while (i < nwords)
		free(result[i++]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		word_id;

	i = 0;
	word_id = 0;
	result = (char **)ft_calloc((ft_wordcount(s, c) + 1), sizeof (char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i > 0 && s[i] != c && s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[word_id] = ft_putword(s, start, i - start + 1);
			if (!result[word_id])
				return (ft_malloc_protection(result, word_id));
			word_id++;
		}
		i++;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	char	**result;
	int		i = 0;

	if (argc != 3)
		return (write(1, "Error\n", 6));
	result = ft_split(argv[1], argv[2][0]);
	if (!result)
		return (-1);
	while (result[i] != NULL)
	{
		printf("%d. |%s|\n", i, result[i]);
		i++;
	}
	while (i > 0)
		free(result[--i]);
	free(result);
	return (0);
}*/
