/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:10:48 by thuynguy          #+#    #+#             */
/*   Updated: 2022/11/29 22:33:08 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_uitoa(unsigned int nbr)
{
	char	*numstr;
	int		len;

	len = print_len_num(nbr, 10);
	numstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!numstr)
		return (0);
	numstr[len--] = '\0';
	while (len >= 0)
	{
		numstr[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (numstr);
}

int	ft_putunbr(int num)
{
	int		print_len;
	char	*numstr;

	if (num == 0)
		return (ft_putchar('0'));
	print_len = 0;
	numstr = ft_uitoa(num);
	if (numstr)
	{
		print_len += ft_putstr(numstr);
		free(numstr);
	}
	return (print_len);
}
