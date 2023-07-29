/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 00:15:43 by nuferron          #+#    #+#             */
/*   Updated: 2023/07/30 00:31:51 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int num)
{
	int	counter;

	counter = 1;
	if (num < 0)
		counter++;
	while (num / 10 != 0)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

char	*ft_conversion(int n, int len, char *str)
{
	while (n / 10 > 0)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	str[len] = n % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)ft_calloc(len + 1, sizeof (char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	ft_conversion(n, len - 1, str);
	return (str);
}

/*int	main(int argc, char **argv)
{
	int		input;
	char	*str;

	if (argc != 2)
		return (write(1, "Error\n", 6));
	input = ft_atoi(argv[1]);
	printf("Input as int: %d\n", input);
	str = ft_itoa(input);
	if (!str)
		return (-1);
	printf("Input as char *: |%s|\n", str);
	free (str);
	return (0);
}*/
