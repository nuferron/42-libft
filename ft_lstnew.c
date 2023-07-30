/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:50:32 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 00:50:50 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

/*int	main(int argc, char **argv)
{
	t_list	*result;
	char	*content;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	content = ft_strdup(argv[1]);
	if (!content)
		return (-1);
	result = ft_lstnew(content);
	printf("content: |%s|\nnext: %p\n", result->content, result->next);
	free(content);
	free(result);
	return (0);
}*/
