/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:50:07 by nuferron          #+#    #+#             */
/*   Updated: 2023/03/02 01:58:56 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	full_del(void *node)
{
	t_list *n;

	n = (t_list *)node;
	free(n->content);
	free(n);
}

void	*print_element(void *element)
{
	return (ft_strdup((char *)element));
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*last_content;
	t_list	*new_node;
	t_list	*fil;

	fil = NULL;
	while (lst)
	{
		last_content = f(lst->content);
		if (last_content == NULL)
		{
			ft_lstclear(&fil, del);
			return (NULL);
		}
		new_node = ft_lstnew(last_content);
		if (new_node == NULL)
		{
			ft_lstclear(&fil, del);
			free(last_content);
			return (NULL);
		}
		ft_lstadd_back(&fil, new_node);
		lst = lst->next;
	}
	return (fil);
}

/*int	main(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list  *newlst;
	t_list	*tmp;
	char *content;

	if (argc < 2)
		return (write(1, "Error\n", 6));
	i = 1;
	while (i < argc)
	{
		content = ft_strdup(argv[i]);
		ft_lstadd_back(&lst, ft_lstnew(content));
		i++;
	}
	newlst = ft_lstmap(lst, &print_element, full_del);
	while (lst)
	{
		tmp = lst->next;
		full_del(lst);
		lst = tmp;
	}
	tmp = newlst;
	while (tmp)
	{
		printf("\nCurrent: %p\nContent: %s\nNext: %p\n", tmp, tmp->content, tmp->next);
		tmp = tmp->next;
	}
	while (newlst)
	{
		tmp = newlst->next;
		full_del(newlst);
		newlst = tmp;
	}
	return (0);
}*/
