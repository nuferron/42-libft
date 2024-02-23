#include "ft_printf.h"

int	format_distributor(int fd, char c, va_list args)
{
	if (c == '%')
		return (write(fd, "%", 1));
	if (c == 'c')
		return (print_char(fd, va_arg(args, int)));
	if (c == 's')
		return (print_string(fd, va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (print_num(fd, va_arg(args, int)));
	if (c == 'p')
		return (print_pointer(fd, va_arg(args, unsigned long long)));
	if (c == 'u')
		return (print_unsigned_num(fd, va_arg(args, unsigned int)));
	if (c == 'x')
		return (print_hex_min(fd, va_arg(args, unsigned int)));
	if (c == 'X')
		return (print_hex_cap(fd, va_arg(args, unsigned int)));
	return (0);
}