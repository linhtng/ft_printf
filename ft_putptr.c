/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:51:06 by thuynguy          #+#    #+#             */
/*   Updated: 2022/11/29 19:31:41 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	print_ptr(unsigned long ptradd)
{
	if (ptradd <= 9)
		ft_putchar(ptradd + '0');
	else if (ptradd < 16)
		ft_putchar(ptradd - 10 + 'a');
	else
	{
		print_ptr(ptradd / 16);
		print_ptr(ptradd % 16);
	}
}

int	ft_putptr(unsigned long ptradd)
{
	int	ptradd_len;

	ptradd_len = 0;
	ptradd_len += ft_putstr("0x");
	if (ptradd == 0)
		return (ptradd_len + ft_putchar('0'));
	print_ptr(ptradd);
	ptradd_len += print_len_num(ptradd, 16);
	return (ptradd_len);
}
