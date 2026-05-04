/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_str_p1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:56:52 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/04 19:12:45 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_sum(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_sum(char *s)
{
	size_t	i;
	int		count;

	if (!s)
		return (ft_putstr_sum("(null)"));
	count = 0;
	i = 0;
	while (s[i])
	{
		count += ft_putchar_sum(s[i]);
		i++;
	}
	return (count);
}

int	ft_putnbr_sum(int num)
{
	char	*str;
	int		count;

	str = ft_itoa(num);
	if (!str)
		return (0);
	count = ft_putstr_sum(str);
	free(str);
	return (count);
}

int	ft_putnbru_sum(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putnbru_sum(num / 10);
	count += ft_putchar_sum((num % 10) + '0');
	return (count);
}
