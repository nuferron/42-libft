/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:51:28 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 01:09:01 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
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
		ft_lstadd_front(&lst, ft_lstnew(argv[i]));
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
