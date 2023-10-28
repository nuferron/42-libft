/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:23:35 by nuferron          #+#    #+#             */
/*   Updated: 2023/10/28 22:04:44 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

#include <ctype.h>

int	main(void)
{
	int	ft;
	int	man;

	ft = ft_isalnum('a');
	man = isalnum('a');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"a\"%s\n", RED, RESET));
	ft = ft_isalnum('\0');
	man = isalnum('\0');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"/\0\"%s\n", RED, RESET));
	ft = ft_isalnum('\n');
	man = isalnum('\n');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"/\n\"%s\n", RED, RESET));
	ft = ft_isalnum('🏖');
	man = isalnum('🏖');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"🏖\"%s\n", RED, RESET));
	ft = ft_isalnum('\200');
	man = isalnum('\200');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"/\200\"%s\n", RED, RESET));
	ft = ft_isalnum('人');
	man = isalnum('人');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"人\"%s\n", RED, RESET));
	ft = ft_isalnum('∞');
	man = isalnum('∞');
	if (ft != man)
		return (printf("%sYOU'VE FAILED TO RETURN \"∞\"%s\n", RED, RESET));
	return (printf("%sYOU'VE PASSED ALL THE TESTS! 🤩\n%s", GREEN, RESET));
}
