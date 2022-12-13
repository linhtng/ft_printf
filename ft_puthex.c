/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:45:39 by thuynguy          #+#    #+#             */
/*   Updated: 2022/12/05 11:15:42 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_hex(unsigned int hex, const char format)
{
	if (hex <= 9)
		ft_putchar(hex + '0');
	else if (hex < 16)
	{
		if (format == 'x')
			ft_putchar(hex - 10 + 'a');
		if (format == 'X')
			ft_putchar(hex - 10 + 'A');
	}
	else
	{
		ft_print_hex(hex / 16, format);
		ft_print_hex(hex % 16, format);
	}
}

int	ft_puthex(unsigned int hex, const char format)
{
	int	hex_len;

	if (hex == 0)
		return (ft_putchar('0'));
	hex_len = print_len_num(hex, 16);
	ft_print_hex(hex, format);
	return (hex_len);
}
