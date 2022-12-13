/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:01:04 by thuynguy          #+#    #+#             */
/*   Updated: 2022/11/29 20:50:24 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	return (index);
}

int	ft_putnbr(int num)
{
	int		print_len;
	char	*numstr;

	print_len = 0;
	numstr = ft_itoa(num);
	if (numstr)
	{
		print_len += ft_putstr(numstr);
		free(numstr);
	}
	return (print_len);
}

int	print_len_num(unsigned long num, int base)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / base;
	}
	return (len);
}
