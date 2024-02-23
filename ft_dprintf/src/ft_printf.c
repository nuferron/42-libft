/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuferron <nuferron@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:01:21 by nuferron          #+#    #+#             */
/*   Updated: 2023/11/29 15:14:50 by nuferron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int	ft_dprintf(int fd, char const *format, ...)
{
	va_list	arg_ptr;
	int		i;
	int		wr_len;
	int		aux;

	i = 0;
	wr_len = 0;
	va_start(arg_ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			aux = format_distributor(fd, format[i], arg_ptr);
		}
		else
			aux = write(fd, &format[i], 1);
		wr_len += aux;
		if (aux == -1)
			return (-1);
		i++;
	}
	va_end(arg_ptr);
	return (wr_len);
}
