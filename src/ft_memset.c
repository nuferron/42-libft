/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:01:49 by nuferron          #+#    #+#             */
/*   Updated: 2023/09/13 20:21:42 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *) b;
	while (i < len)
		aux[i++] = (unsigned char) c;
	return (b);
}

/*
#include <string.h>
int main()
{
	char str[] = "It's-a me, Mario!";
	char str2[] = "hola que tal";

	char *str3 = NULL;
	str3 = strdup("hola");
	memset(str3, 300, 30);
	//ft_memset(str, 127, -1);
	printf("bo |%s|\nft %s\n", str, str2);
}*/