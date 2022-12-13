/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:09:56 by thuynguy          #+#    #+#             */
/*   Updated: 2022/12/05 14:12:41 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptradd);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int num);
int	ft_putunbr(int num);
int	print_len_num(unsigned long num, int base);
int	ft_puthex(unsigned int hex, const char format);

#endif
