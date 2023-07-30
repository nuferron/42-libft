/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:55:18 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 01:10:02 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*tmp;
	int		i;

	if (!lst)
		return ;
	i = 1;
	aux = *lst;
	while (aux)
	{
		del(aux->content);
		tmp = aux->next;
		free(aux);
		aux = tmp;
	}
	*lst = NULL;
}

/*int	main(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list  *tmp;
	char 	*content;

	if (argc < 2)
		return (write(1, "Error\n", 6));
	lst = NULL;
	i = 1;
	while (i < argc)
	{
		content = ft_strdup(argv[i]);
		ft_lstadd_back(&lst, ft_lstnew(content));
		i++;
	}
	tmp = lst;
	while (tmp)
	{
		printf("\nCurrent: %p\nContent: %s\nNext: %p\n", tmp, tmp->content, tmp->next);
		tmp = tmp->next;
	}
	ft_lstclear(&lst, &del);
	printf("lst should be NULL: %p\n", lst);
	return (0);
}*/
