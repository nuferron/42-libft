/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 00:54:32 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 00:54:45 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
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
	tmp = lst;
	while(lst)
	{
		tmp = lst->next;
		ft_lstdelone(lst, &del);
		lst = tmp;
	}
	printf("lst should be NULL: %p\n", lst);
	return (0);
}*/
