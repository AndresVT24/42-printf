/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_str_p2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:26:56 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/04 19:12:33 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex_ptr(num / 16);
	count += ft_putchar_sum(base[num % 16]);
	return (count);
}

int	ft_putptr_sum(void *ptr)
{
	int				count;
	unsigned long	address;

	address = (unsigned long)ptr;
	count = 0;
	count += ft_putstr_sum("0x");
	count += ft_puthex_ptr(address);
	return (count);
}

int	ft_putnbrhex_sum(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += ft_putnbrhex_sum(num / 16);
	count += ft_putchar_sum(base[num % 16]);
	return (count);
}

int	ft_putnbrhex_up_sum(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_putnbrhex_up_sum(num / 16);
	count += ft_putchar_sum(base[num % 16]);
	return (count);
}
