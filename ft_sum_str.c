/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:56:52 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 20:41:49 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_sum(char c)
{
	write(1, &c, 1);
    return (1);
}

int ft_putstr_sum(char *s)
{
	size_t	i;
    int count;

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

int ft_putnbr_sum(int num)
{
    char    *str;
    int count;

    str = ft_itoa(num);
    if(!str)
    {
        return (0);
    }
    count = ft_putstr_sum(str);
    free(str);
    return(count);
}

//FUNCION A MIRAR
int ft_putptr_sum(void *ptr)
{   
    int count;
    unsigned long   address;

    address = (unsigned long)ptr;
    count = 0;
    count += ft_putstr_sum("0x");
    count += ft_puthex_ptr(address);
    return (count);
}