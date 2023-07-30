/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:53:45 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 00:53:48 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

/*int	main(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list	*tmp;

	if (argc < 2)
		return (write(1, "Error\n", 6));
	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(&lst, ft_lstnew(argv[i]));
		i++;
	}
	while (lst)
	{
		printf("\nCurrent: %p\nContent: %s\nNext: %p\n", lst, lst->content, lst->next);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}*/
