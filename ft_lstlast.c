/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:53:11 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 01:10:23 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list	*last;

	if (argc < 2)
		return (write(1, "Error\n", 6));
	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(&lst, ft_lstnew(argv[i]));
		i++;
	}
	last = ft_lstlast(lst);
	printf("The last element is:\nContent: %s\nNext: %p\n", last->content, last->next);
	while (lst)
	{
		printf("\nCurrent: %p\nContent: %s\nNext: %p\n", lst, lst->content, lst->next);
		free(lst);
		lst = lst->next;
	}
	return (0);
}*/
