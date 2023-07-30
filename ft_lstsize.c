/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:52:36 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 00:52:39 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
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
	printf("The list has %d elements\n", ft_lstsize(lst));
	while (lst)
	{
		printf("\nCurrent: %p\nContent: %s\nNext: %p\n", lst, lst->content, lst->next);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}*/
