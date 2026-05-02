/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:56:02 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 21:06:37 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_sign(char opt, va_list *args)
{
    if (opt == 'c')
        return (ft_putchar_sum(va_arg(*args, int)));
    else if (opt == 's')
        return (ft_putstr_sum(va_arg(*args, char *)));
    else if (opt == 'p')
        return (ft_putptr_sum(va_arg(*args, void *)));
    else if (opt == 'd' || opt == 'i')
        return (ft_putnbr_sum(va_arg(*args, int)));
    else if (opt == 'u')
        return (ft_putnbru_sum(va_arg(*args, int)));
    else if (opt == 'x')
        return (ft_putnbrhex_sum(va_arg(*arg, int)));
    else if (opt == 'X')
        return (ft_putnbrHEX_sum(va_arg(*arg, int)));
    else if (opt == '%')
        return (ft_putchar_sum('%'));
    return (0);
}