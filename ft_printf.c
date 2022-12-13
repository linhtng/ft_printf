/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:44:26 by thuynguy          #+#    #+#             */
/*   Updated: 2022/11/29 18:18:21 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_print_format(va_list arg_list, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_putchar(va_arg(arg_list, int));
	else if (format == 's')
		print_len += ft_putstr(va_arg(arg_list, char *));
	else if (format == 'p')
		print_len += ft_putptr(va_arg(arg_list, unsigned long));
	else if (format == 'd' || format == 'i')
		print_len += ft_putnbr(va_arg(arg_list, int));
	else if (format == 'u')
		print_len += ft_putunbr(va_arg(arg_list, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_puthex(va_arg(arg_list, unsigned int), format);
	else if (format == '%')
		print_len += ft_putchar('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		i;
	int		print_len;

	va_start(arg_list, str);
	i = 0;
	print_len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_print_format(arg_list, str[i + 1]);
			i++;
		}
		else
			print_len += ft_putchar(str[i]);
		i++;
	}
	return (print_len);
}
